@class NSString, AWEIMImageMessage, AWEIMNormalImageMessageViewModel, NSAttributedString;
@protocol AWEIMNativeDynamicContentInterface;

@interface AWEIMInnerImageContentComponent : AWEIMNormalImageContentComponent <AWEIMInnerMessageContentComponentProtocol>

@property (retain, nonatomic) AWEIMImageMessage *subMessage;
@property (retain, nonatomic) AWEIMNormalImageMessageViewModel *originMessageViewModel;
@property (weak, nonatomic) id<AWEIMNativeDynamicContentInterface> contentService;
@property (nonatomic) unsigned long long orientation;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)enableDisplay;
- (id)displayAttributedContent;
- (void)didTapCoverAction;
- (id)specializedViewModel;
- (void)reloadImageFromVM;
- (void)p_customizePresenter;
- (void).cxx_destruct;
- (id)displayMessage;

@end
