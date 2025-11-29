@class NSString, UIImageView, IESGCPTimer, UILabel, NSNumber;

@interface IESGCPXPlayGameDraggableGuideView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *listGuideArrowImageView;
@property (retain, nonatomic) UILabel *listGuideLabel;
@property (retain, nonatomic) IESGCPTimer *hideListTimer;
@property (nonatomic) BOOL isOnDraggableViewAction;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) id /* block */ onSelfClicked;
@property (copy, nonatomic) id /* block */ onArrowClicked;
@property (copy, nonatomic) id /* block */ autoDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)showGuideSettingViewWithText:(id)a0 duration:(double)a1 clickSelfBlock:(id /* block */)a2 clickArrowBlock:(id /* block */)a3 autoDismissBlock:(id /* block */)a4;
- (void)_onGuideArrowImageViewClicked:(id)a0;
- (void)_invalidateHideListTimerTimer;
- (void)showGuideSettingViewWithAttributeText:(id)a0;
- (void)showGuideSettingView;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setup;
- (void)_onClicked;

@end
