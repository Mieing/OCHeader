@class NSString, AWEURLModel;

@interface AWESpecialStickerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) long long stickerType;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *complianceData;

+ (id)iconURLJSONTransformer;
+ (id)stickerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
