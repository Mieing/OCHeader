@class NSString;

@interface AWEClassroomImpl.ClassroomMediaUploadModel : MTLModel <MTLJSONSerializing> {
    void /* function */ accessKey;
    void /* function */ secretKey;
    void /* function */ sessionToken;
}

@property (nonatomic, copy) NSString *accessKey;
@property (nonatomic, copy) NSString *secretKey;
@property (nonatomic, copy) NSString *sessionToken;
@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
