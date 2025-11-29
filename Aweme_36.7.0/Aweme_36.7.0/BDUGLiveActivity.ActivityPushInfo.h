@class NSString, NSDictionary;

@interface BDUGLiveActivity.ActivityPushInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ id;
    void /* function */ token;
    void /* function */ event;
    void /* function */ trackParams;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *event;
@property (nonatomic, copy) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
