@class NSString;

@interface AWEIMChatBackgroundModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *md5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getContentDict;
- (BOOL)isValidV2;
- (BOOL)isValidRealV2;
- (id)initWithResponseV1:(id)a0 responseV2:(id)a1;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithJsonString:(id)a0;

@end
