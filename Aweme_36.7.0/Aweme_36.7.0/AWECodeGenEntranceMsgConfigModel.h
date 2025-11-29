@class NSString;

@interface AWECodeGenEntranceMsgConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *entranceKey;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int promptType;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
