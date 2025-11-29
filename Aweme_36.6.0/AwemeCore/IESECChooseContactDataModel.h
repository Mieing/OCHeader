@class NSString;

@interface IESECChooseContactDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phone;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
