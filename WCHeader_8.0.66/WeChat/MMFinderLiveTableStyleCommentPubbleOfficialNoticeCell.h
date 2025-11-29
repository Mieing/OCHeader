@class CAGradientLayer, MMUIView, CALayer, MMFinderLiveLiveRoleSignView;

@interface MMFinderLiveTableStyleCommentPubbleOfficialNoticeCell : MMFinderLiveTableStyleCommentPubbleSignTextCell

@property (retain, nonatomic) MMUIView *colorBackView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *colorLayer;
@property (nonatomic) unsigned int lastRank;
@property (nonatomic) unsigned int lastMsgSubtype;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;

- (void)updateBackGroundColor;
- (void)layoutUI;
- (void)layoutMysteriousSignView;
- (id)signText;
- (BOOL)isUITypeValid;
- (void)clearBackgroundLayers;
- (BOOL)isFansGroupNotice;
- (unsigned int)getRank;
- (BOOL)shouldShowSpecialColor;
- (void)updateBackgroundLayers;
- (void)createGradientLayer;
- (void)createColorLayer;
- (void).cxx_destruct;

@end
