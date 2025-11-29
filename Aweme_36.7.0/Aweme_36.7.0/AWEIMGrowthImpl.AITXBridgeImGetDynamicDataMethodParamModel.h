@class NSString, NSDictionary;

@interface AWEIMGrowthImpl.AITXBridgeImGetDynamicDataMethodParamModel : BDXBridgeModel {
    void /* function */ conversationID;
    void /* function */ messageID;
    void /* function */ uid;
}

@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, copy) NSString *messageID;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, retain) NSDictionary *queryParamDict;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
