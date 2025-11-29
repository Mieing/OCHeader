@class NSString;

@interface WXKBBizAction : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) unsigned int messageType;
@property (readonly, nonatomic) unsigned int actionType;

+ (id)messageActionWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)perform:(id /* block */)a0;
- (BOOL)precheck;
- (void)privatePerform;
- (id)getLoadingString;
- (id)getErrorString;
- (void).cxx_destruct;

@end
