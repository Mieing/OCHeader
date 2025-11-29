@class NSString, NSDictionary;

@interface IESIMCodeGenGeneralFloatingBarModel : AWEBaseDataModel

@property (nonatomic) long long barType;
@property (copy, nonatomic) NSString *barText;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnAction;
@property (nonatomic) long long updateTimestamp;
@property (nonatomic) double barPriority;
@property (copy, nonatomic) NSString *barId;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *barIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
