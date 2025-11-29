@class NSArray, WCFinderFeedContentVM, NSString;

@interface WCFinderLiveHomePageScrollActionSheet : MMScrollActionSheet <WCFinderLiveShareSceneProvider>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long containerId;
@property (nonatomic) BOOL forceDarkMode;
@property (retain, nonatomic) NSArray *itemArrayConfig;
@property (nonatomic) long long liveShareScene;
@property (nonatomic) BOOL shareFromFastForward;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentVM:(id)a0 containerId:(unsigned long long)a1;
- (id)initWithContentVM:(id)a0 containerId:(unsigned long long)a1 forceDarkMode:(BOOL)a2;
- (id)_getFinderDisableColor;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)a0 screenWid:(double)a1 scene:(unsigned long long)a2 msgType:(unsigned int)a3 innerAppMsgType:(unsigned int)a4;
- (BOOL)hasItem:(unsigned long long)a0;
- (id)genMenuIconArray:(id)a0 contentVM:(id)a1;
- (id)getRowItems:(unsigned long long)a0 contentVM:(id)a1;
- (BOOL)_itemEnable:(unsigned long long)a0 contentVM:(id)a1;
- (void)configScrollActionSheet:(id)a0 rowIndex:(unsigned long long)a1;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (void).cxx_destruct;

@end
