@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareEditChapterChannel : AWEShareBaseChannel <AWEShareItemDelegate, AWEShareFunction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;

- (id)commonParams;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (void)updateChapterStatus:(id)a0;
- (BOOL)isChapterExisted;
- (BOOL)isChapterCheckFailed;
- (BOOL)isChapterProposal;
- (BOOL)isChapterChecking;
- (BOOL)isChapterGenerating;
- (void)trackWhenEditChapterIconDidClick;
- (void)trackEditChapterIconShown;
- (BOOL)share;
- (id)init;
- (BOOL)isExpired;
- (id)title;
- (void)dealloc;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
