@class NSString, NSDictionary, UIView;
@protocol AWETopicShootButtonProtocol;

@interface AWETopicShootButtonWrapperView : AWEUGCTopicPublishEntranceBaseView <AWETopicShootButtonDelegate>

@property (copy, nonatomic) NSString *styleName;
@property (retain, nonatomic) UIView<AWETopicShootButtonProtocol> *shootButton;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onShootButtonClicked;
- (BOOL)shouldCustomizeLayout;
- (void)executeCustomManualLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)executeCustomAutoLayoutWithContainerView:(id)a0;
- (id)initWithStyleName:(id)a0 logExtraDict:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
