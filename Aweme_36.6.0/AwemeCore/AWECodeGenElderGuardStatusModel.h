@class NSString;

@interface AWECodeGenElderGuardStatusModel : AWEBaseDataModel

@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonUrl;
@property (copy, nonatomic) NSString *elderGuardRecordId;
@property (copy, nonatomic) NSString *popupTitle;
@property (copy, nonatomic) NSString *popupContentFirstLine;
@property (copy, nonatomic) NSString *popupContentSecondLine;
@property (copy, nonatomic) NSString *popupButtonText;
@property (copy, nonatomic) NSString *popupButtonUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
