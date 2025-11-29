@class NSString;

@interface AWEPaySwiftImpl.CCMTrafficInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ trafficID;
    void /* function */ trafficName;
    void /* function */ trafficType;
    void /* function */ logoURL;
}

@property (nonatomic, copy) NSString *trafficID;
@property (nonatomic, copy) NSString *trafficName;
@property (nonatomic, copy) NSString *trafficType;
@property (nonatomic, copy) NSString *logoURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
