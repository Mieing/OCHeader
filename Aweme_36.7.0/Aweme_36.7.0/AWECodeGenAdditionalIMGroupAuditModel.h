@class NSString, NSArray;

@interface AWECodeGenAdditionalIMGroupAuditModel : AWEBaseDataModel

@property (nonatomic) long long applyId;
@property (nonatomic) int applyStatus;
@property (nonatomic) long long btnType;
@property (copy, nonatomic) NSString *btnDesc;
@property (copy, nonatomic) NSString *btnSchema;
@property (copy, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) NSString *mainContent;
@property (copy, nonatomic) NSString *actionDesc;
@property (copy, nonatomic) NSString *resultDesc;
@property (copy, nonatomic) NSString *ext;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
