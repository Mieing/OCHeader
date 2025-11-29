@class AWELivePreviewExtendArea, NSString, UIView, BDImageView;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionLiveExtendGuideView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UIView *liveExtendContentView;
@property (retain, nonatomic) BDImageView *iconContainerView;
@property (retain, nonatomic) UIView *rightInformationContainer;
@property (retain, nonatomic) UIView *torightInformationContainer;
@property (retain, nonatomic) AWELivePreviewExtendArea *extendData;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)createPartsView:(id)a0;
- (id)p_getInformation:(id)a0;
- (BOOL)informationIsChanged:(id)a0;
- (void)loadImageWithImageView:(id)a0 imageURLList:(id)a1;
- (id)p_parseFromDicData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
