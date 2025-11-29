@class NSString;

@interface AWELuckyCatTaskDoneResponsePopupInfo : AWEBaseApiModel

@property (nonatomic) long long popupType;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long totalNum;
@property (copy, nonatomic) NSString *headText;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *middleText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (copy, nonatomic) NSString *footText;
@property (copy, nonatomic) NSString *footSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
