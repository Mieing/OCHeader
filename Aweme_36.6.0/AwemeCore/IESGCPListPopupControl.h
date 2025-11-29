@class NSString, IESGCPListPopupBackgroundView, UIButton;

@interface IESGCPListPopupControl : NSObject <IESGCPListPopupBackgroundViewDelegate>

@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) IESGCPListPopupBackgroundView *popupBackgroundView;
@property (retain, nonatomic) NSString *exitMethod;
@property (readonly, nonatomic) UIButton *rightBarButton;
@property (nonatomic) long long containerType;
@property (copy, nonatomic) id /* block */ showCompletionHandler;
@property (copy, nonatomic) id /* block */ hideCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hidePanel;
- (id)initTitleText:(id)a0 itemType:(long long)a1;
- (void)showCustomBackgroundPanelWithContentView:(id)a0 showMask:(BOOL)a1;
- (void)popupBackgroundViewLeftBarButtonDidClicked:(id)a0;
- (void)setLeftBarButtonHidden:(BOOL)a0;
- (void)showPanelWithContentView:(id)a0;
- (void).cxx_destruct;

@end
