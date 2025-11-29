@class NSString, NSArray, AWEIMSecurityToastConfigAudioModel, NSDictionary, AWEIMSecurityToastConfigCheckboxOptionModel;

@interface AWEIMSecurityToastConfigModel : AWEBaseApiModel

@property (nonatomic) long long index;
@property (nonatomic) long long toastID;
@property (nonatomic) long long noticeType;
@property (nonatomic) BOOL hasPicture;
@property (copy, nonatomic) NSString *headImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAlertUrl;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL subtitleNeedLeftAlignment;
@property (nonatomic) long long waitTime;
@property (copy, nonatomic) NSArray *params;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *toastList;
@property (retain, nonatomic) AWEIMSecurityToastConfigCheckboxOptionModel *option;
@property (nonatomic) BOOL canClose;
@property (retain, nonatomic) AWEIMSecurityToastConfigAudioModel *audioInfo;
@property (retain, nonatomic) NSDictionary *toastInfo;

+ (id)paramsJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)optionJSONTransformer;
+ (id)toastListJSONTransformer;
+ (id)audioInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setToastInfo:(id)a0 ForLevel:(int)a1;
- (void).cxx_destruct;

@end
