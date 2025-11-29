@class NSString;

@interface AWEPaySwiftImpl.FKMServerExtra : MTLModel <MTLJSONSerializing> {
    void /* function */ logID;
}

@property (nonatomic) long long serverRecvTimestamp;
@property (nonatomic) long long serverRespTimestamp;
@property (nonatomic, copy) NSString *logID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
