@class EmoticonBoardView, NSString, MMEmoticonBoardNativeViewContext;

@interface MMEmoticonBoardNativeView : NSObject <EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, FlutterPlatformView>

@property (retain, nonatomic) MMEmoticonBoardNativeViewContext *context;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeForData:(id)a0;

- (id)initWithContext:(id)a0;
- (id)createEmoticonBoardView;
- (id)view;
- (id)selectEmoticonArgumentsFromEmoticon:(id)a0 useThumbImage:(BOOL)a1;
- (void)callSelectEmoticonMethod:(id)a0;
- (void)checkAndCallSelectEmoticonMethod:(id)a0;
- (void)onEmoticonSearchIconClicked;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void).cxx_destruct;

@end
