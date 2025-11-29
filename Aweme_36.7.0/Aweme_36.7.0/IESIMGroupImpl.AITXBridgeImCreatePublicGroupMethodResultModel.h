@class NSNumber, NSString;

@interface IESIMGroupImpl.AITXBridgeImCreatePublicGroupMethodResultModel : BDXBridgeModel {
    void /* function */ conversationId;
}

@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic, copy) NSString *conversationId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
