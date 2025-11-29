@class NSString;

@interface ACCOneClickFilmingEnhanceSelectionButton : ACCButton <AWEOneClickFilmingButtonProtocol>

@property (nonatomic) BOOL fromPreview;
@property (nonatomic) BOOL isJingXuanUpload;
@property (nonatomic) long long themeType;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL fromMVPage;
@property (nonatomic) BOOL isSimpleStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (void)updateToPreview:(BOOL)a0;
- (void)updateTitleStyle:(id)a0;
- (void)updateBtnWithAssetsCount:(long long)a0;
- (id)aACCMidVideoCreationProtocol;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPreview:(BOOL)a1 themeType:(long long)a2 isJingXuanUpload:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPreview:(BOOL)a1 themeType:(long long)a2;
- (void)setupImageIfNeed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStyle:(unsigned long long)a0;
- (void)setupUI;

@end
