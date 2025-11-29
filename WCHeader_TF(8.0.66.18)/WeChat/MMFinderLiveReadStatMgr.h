@class NSMutableDictionary;

@interface MMFinderLiveReadStatMgr : NSObject

@property (retain, nonatomic) NSMutableDictionary *records;

- (id)init;
- (void)addReadRecord:(unsigned long long)a0 commentScene:(int)a1;
- (BOOL)checkReadRecord:(unsigned long long)a0;
- (BOOL)checkReadRecord:(unsigned long long)a0 commentScene:(int)a1;
- (BOOL)checkReadRecord:(unsigned long long)a0 commentScenes:(id)a1;
- (void).cxx_destruct;

@end
