@class NSString;

@interface AWECodeGenCommentDeleteResultMapEntryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL result;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
