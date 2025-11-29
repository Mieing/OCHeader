@class NSString, AWEShareContext, AWEAwemeModel;
@protocol AWEShareView;

@interface AWEDuetShareChannel : AWEShareBaseChannel <AWEShareFunction>

@property (retain, nonatomic) AWEAwemeModel *refreshedAwemeModel;
@property (nonatomic) BOOL isDuetSing;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;

- (id)enterMethod;
- (BOOL)isChannelEnabledWithContext:(id)a0;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (BOOL)prepareToShare;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)prepareToShareWithCompletion:(id /* block */)a0;
- (void)_beginDuet;
- (void)executeFunctionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)share;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
