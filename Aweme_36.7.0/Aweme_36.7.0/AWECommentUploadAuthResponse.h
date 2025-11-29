@class NSString, NSNumber;

@interface AWECommentUploadAuthResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSNumber *currentTime;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *uploadDomain;
@property (retain, nonatomic) AWECommentUploadAuthResponse *liveVideoUploadAuthResponse;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
