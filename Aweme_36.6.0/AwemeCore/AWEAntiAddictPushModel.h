@class NSString, NSArray;

@interface AWEAntiAddictPushModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCurTimeBetween5And22;
@property (copy, nonatomic) NSString *remindTitle;
@property (copy, nonatomic) NSArray *buttonConfigs;
@property (copy, nonatomic) NSString *iconGeckoChannel;
@property (copy, nonatomic) NSString *iconImage;
@property (copy, nonatomic) NSString *iconLottie;
@property (copy, nonatomic) NSString *backgroundColorBegin;
@property (copy, nonatomic) NSString *backgroundColorEnd;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *actionBtnText;
@property (copy, nonatomic) NSString *actionBtnTextColor;
@property (copy, nonatomic) NSString *actionBtnSchema;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *hintTextColor;
@property (copy, nonatomic) NSString *timeManagerButtonTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)buttonTitles;

@end
