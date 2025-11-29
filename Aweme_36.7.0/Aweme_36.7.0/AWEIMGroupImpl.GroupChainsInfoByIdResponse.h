@class NSNumber, _TtC14AWEIMGroupImpl16GroupChainsModel, NSString;

@interface AWEIMGroupImpl.GroupChainsInfoByIdResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ statusMsg;
}

@property (nonatomic, retain) _TtC14AWEIMGroupImpl16GroupChainsModel *groupChains;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic, copy) NSString *statusMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
