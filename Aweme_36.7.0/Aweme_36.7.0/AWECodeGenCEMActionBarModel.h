@class NSString, AWECodeGenIconUrlModel;

@interface AWECodeGenCEMActionBarModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECodeGenIconUrlModel *iconModel;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int diggCount;
@property (nonatomic) BOOL hasDigged;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
