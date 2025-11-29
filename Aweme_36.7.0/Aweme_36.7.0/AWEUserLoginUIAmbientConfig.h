@class NSString, UIColor;

@interface AWEUserLoginUIAmbientConfig : MTLModel <MTLJSONSerializing, AWEUserLoginUIAmbientConfig>

@property (retain, nonatomic) NSString *defaultLoginDesc;
@property (retain, nonatomic) NSString *geckoChannel;
@property (retain, nonatomic) NSString *headerImageURL;
@property (retain, nonatomic) NSString *headerImageURLPadVertical;
@property (retain, nonatomic) NSString *headerImageURLPadHorizontal;
@property (retain, nonatomic) NSString *bgImageURL;
@property (retain, nonatomic) NSString *smallBgImageURL;
@property (retain, nonatomic) NSString *bgImageURLPadVertical;
@property (retain, nonatomic) NSString *bgImageURLPadHorizontal;
@property (retain, nonatomic) UIColor *closeIconColor;
@property (retain, nonatomic) UIColor *helpTextColor;
@property (retain, nonatomic) NSString *btnExtraInfo;
@property (retain, nonatomic) NSString *titleExtraInfo;
@property (retain, nonatomic) NSString *cornerMarkText;
@property (retain, nonatomic) NSString *cornerMarkBgColor;
@property (retain, nonatomic) NSString *cornerMarkTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long statusBarStyle;

+ (id)closeIconColorJSONTransformer;
+ (id)helpTextColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithThemeModel:(id)a0;
- (void).cxx_destruct;

@end
