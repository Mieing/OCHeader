@class NSString, UIColor, NSNumber;

@interface BDXPageModel : NSObject <BDSchemaModelProtocol>

@property (nonatomic) BOOL disableSwipe;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL aliasCopyLinkAction;
@property (nonatomic) BOOL immersiveMode;
@property (nonatomic) BOOL needReloadWithTheme;
@property (nonatomic) BOOL transStatusBar;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *statusBarColor;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double preferredWidth;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSNumber *shouldFullScreen;
@property (retain, nonatomic) NSNumber *hideStatusBar;
@property (nonatomic) long long navBtnType;
@property (retain, nonatomic) UIColor *navBarColor;
@property (nonatomic) NSNumber *showCloseall;
@property (nonatomic) BOOL blockBackPress;
@property (nonatomic) BOOL enableSharePanel;
@property (nonatomic) BOOL forbidFullScreenBack;
@property (nonatomic) BOOL enableContentFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
