@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenTalentTaskModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long useCount;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *logPb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
