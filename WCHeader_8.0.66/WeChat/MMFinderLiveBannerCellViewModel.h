@class MMFinderLiveBannerInfo;

@interface MMFinderLiveBannerCellViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveBannerInfo *bannerInfo;
@property (nonatomic) unsigned long long curSubTitleIndex;
@property (nonatomic) BOOL disbalePagAnimation;

+ (id)vmWithBanner:(id)a0;

- (void).cxx_destruct;

@end
