@class NSString, UIView;

@interface AWEIMEmoticonStoreEntryComponent : AWEIMComponentBase <AWEIMEmoticonStoreEntryComponent, AWEIMEmoticonHasBackgroundImageComponent>

@property (retain, nonatomic) UIView *storeIconView;
@property (retain, nonatomic) UIView *storeEntryView;
@property (nonatomic) long long firstTabType;
@property (nonatomic) BOOL enableFirstTabConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)fixedStoreEntryClicked;
- (void)verticalAlignmentCenter:(BOOL)a0;
- (void).cxx_destruct;

@end
