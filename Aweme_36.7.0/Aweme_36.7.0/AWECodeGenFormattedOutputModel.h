@class NSString;

@interface AWECodeGenFormattedOutputModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *formattedInfo;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL isEditable;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
