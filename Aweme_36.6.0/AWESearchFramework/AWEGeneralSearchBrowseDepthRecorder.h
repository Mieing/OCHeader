@class NSMutableDictionary;

@interface AWEGeneralSearchBrowseDepthRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *browseDepthMap;

+ (id)shareInstance;

- (long long)getMaxBrowseDepthForSearchId:(id)a0;
- (void)recordMaxBrowseDepth:(long long)a0 ForSearchId:(id)a1;
- (void).cxx_destruct;

@end
