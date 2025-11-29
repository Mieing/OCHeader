@class NSString;

@interface AWEIMCodeGenShareMixPhotoResponseModel : AWEBaseResponseModel

@property (nonatomic) long long shareTaskId;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
