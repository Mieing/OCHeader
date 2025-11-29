@class NSString;

@interface AWEIMMixShareDetailInfoModel_PhotoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *mediumUrl;
@property (copy, nonatomic) NSString *largeUrl;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL useOriginImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
