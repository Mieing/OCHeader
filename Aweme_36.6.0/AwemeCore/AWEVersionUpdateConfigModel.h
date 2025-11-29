@class NSString;

@interface AWEVersionUpdateConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailTitle;
@property (nonatomic) long long detailTitleAlignment;
@property (copy, nonatomic) NSString *confirmBtnTitle;
@property (copy, nonatomic) NSString *cancelBtnTitle;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL pauseVideoOnShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)checkAndCorrect;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
