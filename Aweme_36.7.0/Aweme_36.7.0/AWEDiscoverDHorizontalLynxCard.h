@class NSString, NSDictionary, AWEDiscoverDHorizontalAutoPlayViewController, AWEAwemeModel;

@interface AWEDiscoverDHorizontalLynxCard : LynxUI <AWEDiscoverDHorizontalAutoPlayViewControllerDelegate, AWEHotSpotHorizontalCardProtocol>

@property (retain, nonatomic) AWEDiscoverDHorizontalAutoPlayViewController *horizontalAutoPlayViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemSpace;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *schemaConfig;
@property (copy, nonatomic) id /* block */ willPlayCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__930;
+ (id)__lynx_prop_config__971;
+ (id)__lynx_prop_config__1012;
+ (id)__lynx_prop_config__1053;
+ (id)__lynx_prop_config__1094;
+ (id)__lynx_prop_config__1135;
+ (id)__lynx_prop_config__1186;

- (id)cardModel;
- (id)hotSpotKeyword;
- (void)videoWillPlay;
- (void)videoWillStop;
- (double)playerHeight;
- (id)itemSchema;
- (void)horizontalPlayerWillPlay;
- (struct CGSize { double x0; double x1; })itemSizeForHorizontalAutoPlayViewController:(id)a0;
- (double)itemSpacingForHorizontalAutoPlayViewController:(id)a0;
- (double)leftMarginForHorizontalAutoPlayViewController:(id)a0;
- (double)rightMarginForHorizontalAutoPlayViewController:(id)a0;
- (void)setHeight:(double)a0 requestReset:(BOOL)a1;
- (void)setWidth:(double)a0 requestReset:(BOOL)a1;
- (void)setLeftMargin:(double)a0 requestReset:(BOOL)a1;
- (void)setRightMargin:(double)a0 requestReset:(BOOL)a1;
- (void)setItemSpace:(double)a0 requestReset:(BOOL)a1;
- (void)setSessionID:(id)a0 requestReset:(BOOL)a1;
- (void)setSchemaConfig:(id)a0 requestReset:(BOOL)a1;
- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)cardType;
- (id)createView;

@end
