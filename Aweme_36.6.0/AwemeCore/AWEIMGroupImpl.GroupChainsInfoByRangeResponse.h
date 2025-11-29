@class NSArray, NSNumber, NSString;

@interface AWEIMGroupImpl.GroupChainsInfoByRangeResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ groupChainsList;
    void /* function */ statusMsg;
}

@property (nonatomic, copy) NSArray *groupChainsList;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic, copy) NSString *statusMsg;

+ (id)groupChainsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
