@class NSString, NSNumber;

@interface IESEffectUploadConfiguration : NSObject

@property (copy, nonatomic) NSString *uploadHostName;
@property (retain, nonatomic) NSNumber *fileRetryCount;
@property (retain, nonatomic) NSNumber *rwTimeout;
@property (retain, nonatomic) NSNumber *socketNumber;
@property (retain, nonatomic) NSNumber *maxFailTime;
@property (copy, nonatomic) NSString *queryAuth;
@property (retain, nonatomic) NSNumber *enableHttps;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *spaceName;

- (void).cxx_destruct;

@end
