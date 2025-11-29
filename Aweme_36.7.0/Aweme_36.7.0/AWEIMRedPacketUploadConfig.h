@class NSString, NSArray;

@interface AWEIMRedPacketUploadConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *spaceName;
@property (nonatomic) long long expireAt;
@property (retain, nonatomic) NSArray *storeKeys;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
