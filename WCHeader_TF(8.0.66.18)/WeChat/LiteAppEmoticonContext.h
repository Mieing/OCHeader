@class EmoticonBoardView, UIViewController, NSString;
@protocol ILiteAppJsApiPluginControllerProtocol;

@interface LiteAppEmoticonContext : NSObject <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, MMLiteAppExt>

@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (weak, nonatomic) UIViewController<ILiteAppJsApiPluginControllerProtocol> *liteAppVC;
@property (nonatomic) unsigned int appUuid;
@property (nonatomic) unsigned int searchSourceScene;
@property (nonatomic) BOOL searchIncludeCustom;
@property (retain, nonatomic) NSString *searchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liteAppEmoticonContextTag;
+ (id)getEmoticonPanelWithUIViewController:(id)a0;
+ (id)getFlutterViewWithController:(id)a0;
+ (id)topViewController;
+ (id)topViewControllerFromViewController:(id)a0;

- (id)initWithEmoticonBoard:(id)a0 withMMLiteAppViewController:(id)a1;
- (void)addEmoticonBoardView;
- (void)enableSendButton:(BOOL)a0;
- (void)showEmoticonPanel;
- (void)detach;
- (void)removeEmoticonPanel;
- (void)publishEmoticonSelectEventWithType:(id)a0 withData:(id)a1;
- (void)publishEmoticonButtonClickEventWithType:(id)a0;
- (void)publishHeightAnimateChangeEventWithOriginHeight:(double)a0 withNextHeight:(double)a1 withAnimateDuration:(double)a2;
- (void)didSelectorEmoticon:(id)a0;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (void)deleteEmoticon;
- (void)onSendButtonClicked;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (id)GetCurrentViewController;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)a0 appId:(id)a1 appUuid:(unsigned int)a2 extraData:(id)a3;
- (void).cxx_destruct;

@end
