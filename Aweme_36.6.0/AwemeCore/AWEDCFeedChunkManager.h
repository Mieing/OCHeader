@class NSMutableSet;

@interface AWEDCFeedChunkManager : NSObject

@property (retain, nonatomic) NSMutableSet *proxySet;

+ (void)handleTidyModelIfNeededWithResponse:(id)a0 fullModelSet:(id)a1 tidyModelDict:(id)a2 URLParams:(id)a3 bodyParams:(id)a4 config:(id)a5;
+ (BOOL)disableMerge;
+ (id)requestAwemeItemsWithManagerConfig:(id)a0;
+ (id)requestPbAwemeItemsWithManagerConfig:(id)a0;
+ (id)sharedInstance;

- (void)removeCurrentProxy:(id)a0;
- (id)getChunkRequestManagerWithConfig:(id)a0;
- (void)registCurrentProxy:(id)a0;
- (void).cxx_destruct;

@end
