@class NSMutableDictionary;

@interface BGIdentifierManager : NSObject

@property (retain) NSMutableDictionary *bgIdentifierDic;
@property (copy) id /* block */ bgCompletedHandler;

+ (id)shareInstance;

- (BOOL)findBgIdentifierDicLock:(id)a0;
- (BOOL)addBgIdentifierDicLock:(id)a0 value:(id)a1;
- (BOOL)deleteBgIdentifierWithValueLock:(id)a0;
- (BOOL)deleteBgIdentifierDicLock:(id)a0;
- (void)clearBgIdentifierDicLock;
- (void).cxx_destruct;
- (id)init;

@end
