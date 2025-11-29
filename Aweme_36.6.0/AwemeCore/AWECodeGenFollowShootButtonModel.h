@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenFollowShootButtonModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
