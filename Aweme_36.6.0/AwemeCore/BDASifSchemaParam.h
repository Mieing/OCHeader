@class NSString, BDXPageModel, BDXPopupModel, BDASifAdInfoModel;

@interface BDASifSchemaParam : BDXSchemaParam <BDXPageSchemaParamProtocol, BDXPopupSchemaParamProtocol>

@property (retain, nonatomic) BDASifAdInfoModel *sifAdModel;
@property (readonly, nonatomic) BOOL isWeb;
@property (readonly, nonatomic) BOOL isLynx;
@property (readonly, nonatomic) BOOL isPopup;
@property (copy, nonatomic) NSString *urlStr;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL isChildViewController;
@property (nonatomic) long long type;
@property (nonatomic) BOOL pullDownIndicatorShow;
@property (nonatomic) double popupRadius;
@property (retain, nonatomic) BDXPageModel *pageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDXPopupModel *popupModel;
@property (nonatomic) BOOL adaptAppTheme;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
