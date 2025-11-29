@class NSString, NSArray;

@interface AWEIMGrowthImpl.AITXBridgeImGetConversationABParamsMethodParamModel : BDXBridgeModel {
    void /* function */ conversationID;
}

@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, retain) NSArray *abKeys;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
