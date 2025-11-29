@class NSString;

@interface AWEPaySwiftImpl.TripSyncMsgModel : MTLModel <MTLJSONSerializing> {
    void /* function */ subTitle;
    void /* function */ actionStr;
    void /* unknown type, empty encoding */ secUid;
}

@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic) long long subTitlePriority;
@property (nonatomic) long long expireAtMS;
@property (nonatomic, copy) NSString *actionStr;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
