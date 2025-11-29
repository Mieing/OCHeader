@class NSMutableArray, BDByteScreenCastSearchNoDeviceModel, BDSCResearchCardView, NSString, UILabel, BDSCLocalCastOptionView, UIView;

@interface BDByteScreenCastSearchNoDeviceView : UIView <UIScrollViewDelegate, BDSCSearchDeviceNoDeviceViewProtocol>

@property (retain, nonatomic) BDSCLocalCastOptionView *localCastView;
@property (retain, nonatomic) UILabel *tipsHeaderLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) NSMutableArray *tipsSubViewArray;
@property (retain, nonatomic) BDSCResearchCardView *researchCardView;
@property (nonatomic) BOOL didUseResearchCard;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceModel *model;
@property (copy, nonatomic) id /* block */ airPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLandscape;

- (void)refreshSubviews;
- (void)configResearchCardView;
- (void)configTipsSubviews;
- (void)loadLocalCastViewIfNeeded;
- (void)updateForTipView:(id)a0;
- (void)jumpToNetSetting;
- (id)localNewTipsConfig;
- (BOOL)useLandscapeUI;
- (void)configLocalCastView;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
