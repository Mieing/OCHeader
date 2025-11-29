@class NSString;

@interface AWECodeGenUserBlockResultMapEntryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL result;
@property (copy, nonatomic) NSString *secUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
