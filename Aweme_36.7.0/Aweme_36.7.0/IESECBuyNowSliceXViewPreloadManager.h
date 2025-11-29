@class NSMutableDictionary;

@interface IESECBuyNowSliceXViewPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadViewDic;

+ (id)sharedManager;

- (void)preloadViewWithElementType:(id)a0;
- (id)getPreloadViewWithElementType:(id)a0;
- (void).cxx_destruct;

@end
