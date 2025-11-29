@class IESLiveCommonCastScreenGuideInfo;

@interface IESLiveCommonCastScreenGuidePanel : UIView

@property (retain, nonatomic) IESLiveCommonCastScreenGuideInfo *guideInfo;

+ (id)castGuidePanelWithInfo:(id)a0;

- (void)setupSubviewsWithInfo:(id)a0;
- (void)didClickStartButton:(id)a0;
- (void).cxx_destruct;

@end
