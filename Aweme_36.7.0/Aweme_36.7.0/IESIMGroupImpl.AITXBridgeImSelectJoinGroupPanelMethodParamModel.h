@class NSNumber, NSString;

@interface IESIMGroupImpl.AITXBridgeImSelectJoinGroupPanelMethodParamModel : BDXBridgeModel {
    void /* function */ bizScene;
    void /* function */ enterFrom;
    void /* function */ enterMethod;
    void /* function */ conversationIds;
    void /* function */ addParticipantsExt;
}

@property (nonatomic, retain) NSNumber *bizLine;
@property (nonatomic, copy) NSString *bizScene;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *enterMethod;
@property (nonatomic, copy) NSString *conversationIds;
@property (nonatomic, retain) NSNumber *sourceType;
@property (nonatomic, copy) NSString *addParticipantsExt;
@property (nonatomic, retain) NSNumber *secretType;
@property (nonatomic, retain) NSNumber *requestSource;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
