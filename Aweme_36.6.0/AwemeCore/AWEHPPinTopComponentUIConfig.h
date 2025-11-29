@class NSString, NSDictionary, UIImage, NSAttributedString;
@protocol AWEHPPinTopBusinessUIConfigProtocol;

@interface AWEHPPinTopComponentUIConfig : NSObject <AWEHPPinTopComponentUIConfigProtocol>

@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) NSString *secondaryButtonText;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subContent;
@property (copy, nonatomic) NSAttributedString *attributeContent;
@property (copy, nonatomic) NSString *headerURL;
@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) id<AWEHPPinTopBusinessUIConfigProtocol> headerViewConfig;
@property (nonatomic) long long stayTime;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long downgradeType;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPinTopModel:(id)a0 configModel:(id)a1;
- (id)generateAttributedStringWithModel:(id)a0 downGradeType:(long long *)a1;
- (void)trackComponentDowngradeWithConfigModel:(id)a0 replaceParams:(id)a1;
- (void)updateUIConfigWithModifyModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
