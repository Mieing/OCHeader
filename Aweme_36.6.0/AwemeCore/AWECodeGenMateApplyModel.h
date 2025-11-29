@class NSArray, NSString, AWECodeGenUserModel;

@interface AWECodeGenMateApplyModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUserModel *userModel;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSArray *messagesModelArray;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *defaultMessage;
@property (copy, nonatomic) NSString *mateApplyId;
@property (nonatomic) int heyStatus;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
