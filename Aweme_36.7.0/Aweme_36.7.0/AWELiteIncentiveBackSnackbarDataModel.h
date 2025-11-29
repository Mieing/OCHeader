@class NSString, NSNumber;

@interface AWELiteIncentiveBackSnackbarDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *amountText;
@property (copy, nonatomic) NSString *amountTextColor;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *taskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
