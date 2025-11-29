@class AWEIMUIImageViewPresenter, AWEIMWebImageViewPresenter, NSString, AWEIMYYLabelPresenter, AWEIMComponentManager;

@interface AWEIMMessageDynamicNoticeCardComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (retain, nonatomic) AWEIMWebImageViewPresenter *leftIconImageView;
@property (retain, nonatomic) AWEIMYYLabelPresenter *label;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *rightArrowImageView;
@property (nonatomic) BOOL shouldShowLeftIcon;
@property (nonatomic) BOOL interactionStyleIsFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)didTapNoticeCard;
- (void)updatePresenterWithHasBackgroundImg:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
