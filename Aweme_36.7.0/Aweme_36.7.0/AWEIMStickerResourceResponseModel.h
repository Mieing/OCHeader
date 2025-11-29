@class NSArray, NSString;

@interface AWEIMStickerResourceResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSArray *forbiddenIds;
@property (nonatomic) long long nextCursor;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL isCompleted;
@property (copy, nonatomic) NSString *customUpdateVersion;
@property (nonatomic) long long stickerEnabelStatus;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
