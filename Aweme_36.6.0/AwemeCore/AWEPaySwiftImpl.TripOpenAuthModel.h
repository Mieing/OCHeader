@class NSString, NSNumber, NSDictionary;

@interface AWEPaySwiftImpl.TripOpenAuthModel : MTLModel <MTLJSONSerializing> {
    void /* function */ clientKey;
    void /* function */ state;
    void /* function */ agreementId;
    void /* function */ scopes;
    void /* function */ scene;
    void /* function */ localScopes;
    void /* function */ certificationInfo;
    void /* function */ redirectUri;
    void /* function */ responseType;
    void /* function */ commentId;
}

@property (nonatomic, copy) NSString *clientKey;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *agreementId;
@property (nonatomic, retain) NSNumber *protoShow;
@property (nonatomic, copy) NSDictionary *scopes;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSDictionary *localScopes;
@property (nonatomic, copy) NSDictionary *certificationInfo;
@property (nonatomic, copy) NSString *redirectUri;
@property (nonatomic, copy) NSString *responseType;
@property (nonatomic, retain) NSNumber *notSkipConfirm;
@property (nonatomic, copy) NSString *commentId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
