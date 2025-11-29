@class NSString, NSArray;
@protocol WCVideoEditResultActionSheetRecentForwardDelegate;

@interface WCVideoEditResultActionSheet : MMScrollActionSheet <RecentForwardScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *actions;
@property (weak, nonatomic) id<WCVideoEditResultActionSheetRecentForwardDelegate> recentForwardDelegate;

+ (id)allActions;

- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)initRecentForwardScrollView;
- (id)initWithActions:(id)a0;
- (id)init;
- (void)loadData;
- (id)buildItemArray;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)disableScrollSheetItem:(long long)a0;
- (void).cxx_destruct;

@end
