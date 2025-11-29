@class NSString;

@interface IESLivePhoneNumberPickerResultModel : IESLiveBridgeModel

@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *phone;
@property (copy, nonatomic) NSString *name;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
