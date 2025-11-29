@class NSString;

@interface AWEPOICommentUploadVideoTokenModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *expiredTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
