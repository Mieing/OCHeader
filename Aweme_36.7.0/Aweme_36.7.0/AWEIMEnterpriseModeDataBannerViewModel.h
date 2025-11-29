@class NSString, NSArray;
@protocol AWEIMMessageTabNaviBubbleInterface;

@interface AWEIMEnterpriseModeDataBannerViewModel : NSObject <AWEIMEnterpriseModeExpandedDataBannerViewDelegate>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *updateTimeTips;
@property (copy, nonatomic) NSArray *cellVMs;
@property (nonatomic) double interItemSpacing;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) double extraTopPadding;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBubbleInterface> naviGuideService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasValidContentToDisplay;
- (double)bannerViewWidth;
- (void)checkFTCIfShouldShowTipsFromContinueIndex:(unsigned long long)a0;
- (id)correctedJumpSchema;
- (void)didShowPopoverTipsOnHeader;
- (void)didTapOnBodyArea;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
