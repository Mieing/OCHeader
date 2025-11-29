@class NSString;

@interface AWECodeGenActivityAnchorInfoModel : AWEBaseDataModel

@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *anchorName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
