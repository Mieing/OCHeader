@class NSMutableDictionary;

@interface AWEAIGCTOSCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tosDict;

+ (id)shareInstance;

- (id)retrieveTOSForPath:(id)a0;
- (void)updateTOSForPath:(id)a0 tos:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
