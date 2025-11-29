@class NSNumber, NSString;

@interface IESIMGroupImpl.AITXBridgeImCreatePublicGroupMethodParamModel : BDXBridgeModel {
    void /* function */ bizScene;
    void /* function */ enterFrom;
    void /* function */ enterMethod;
}

@property (nonatomic, retain) NSNumber *bizLine;
@property (nonatomic, copy) NSString *bizScene;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *enterMethod;
@property (nonatomic, retain) NSNumber *enterChatOnCreate;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
