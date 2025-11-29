@class NSString, UIImageView, IESGCPTimer, UILabel, NSNumber;

@interface IESGCPXPlayGameSidebarGuideView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *listGuideArrowImageView;
@property (retain, nonatomic) UILabel *listGuideLabel;
@property (retain, nonatomic) UIImageView *guideLabelIcon;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) IESGCPTimer *hideListTimer;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) id /* block */ onSelfClicked;
@property (copy, nonatomic) id /* block */ onArrowClicked;
@property (copy, nonatomic) id /* block */ autoDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)showGuideSettingViewWithText:(id)a0 duration:(double)a1 imageUrl:(id)a2 clickSelfBlock:(id /* block */)a3 clickArrowBlock:(id /* block */)a4 autoDismissBlock:(id /* block */)a5;
- (id)_getValidFrameView;
- (void)_onGuideArrowImageViewClicked:(id)a0;
- (void)_invalidateHideListTimerTimer;
- (double)heightForText:(id)a0 withFont:(id)a1 andWidth:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setup;
- (void)_onClicked;

@end
