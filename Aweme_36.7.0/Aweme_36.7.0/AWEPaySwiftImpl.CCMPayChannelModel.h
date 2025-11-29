@class NSString;

@interface AWEPaySwiftImpl.CCMPayChannelModel : MTLModel <MTLJSONSerializing> {
    void /* function */ logoURL;
    void /* function */ channelName;
    void /* function */ jumpURL;
}

@property (nonatomic, copy) NSString *logoURL;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, copy) NSString *jumpURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
