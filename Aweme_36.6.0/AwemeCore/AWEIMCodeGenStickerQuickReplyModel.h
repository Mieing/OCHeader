@class NSString;

@interface AWEIMCodeGenStickerQuickReplyModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) int stickerType;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSString *variantDisplayName;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
