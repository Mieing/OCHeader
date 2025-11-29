@class NSString;

@interface IESArtistStickerUploadAuthModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *sessionToken;
@property (readonly, copy, nonatomic) NSString *accessKey;
@property (readonly, copy, nonatomic) NSString *secretKey;
@property (readonly, copy, nonatomic) NSString *expiredTime;
@property (readonly, copy, nonatomic) NSString *currentTime;
@property (readonly, copy, nonatomic) NSString *spaceName;
@property (readonly, copy, nonatomic) NSString *uploadDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
