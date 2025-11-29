@class NSString;

@interface AWECodeGenBaseNoticeDisturbModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) BOOL disturb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
