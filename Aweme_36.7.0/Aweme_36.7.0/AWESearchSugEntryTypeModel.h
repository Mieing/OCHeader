@class NSString;

@interface AWESearchSugEntryTypeModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *entryContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
