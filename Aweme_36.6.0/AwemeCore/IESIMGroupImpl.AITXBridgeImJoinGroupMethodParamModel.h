@class NSNumber, NSString;

@interface IESIMGroupImpl.AITXBridgeImJoinGroupMethodParamModel : BDXBridgeModel {
    void /* function */ bizScene;
    void /* function */ enterFrom;
    void /* function */ enterMethod;
    void /* function */ conversationId;
    void /* function */ addParticipantsExt;
}

@property (nonatomic, retain) NSNumber *bizLine;
@property (nonatomic, copy) NSString *bizScene;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *enterMethod;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, retain) NSNumber *sourceType;
@property (nonatomic, retain) NSNumber *secretType;
@property (nonatomic, copy) NSString *addParticipantsExt;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
