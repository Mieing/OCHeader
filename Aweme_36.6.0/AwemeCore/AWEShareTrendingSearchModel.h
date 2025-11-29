@class UIImage, AWESearchTrendingModel, AWEShareModel;

@interface AWEShareTrendingSearchModel : NSObject

@property (retain, nonatomic) AWESearchTrendingModel *trendingModel;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (retain, nonatomic) UIImage *snapshotImage;

- (void).cxx_destruct;

@end
