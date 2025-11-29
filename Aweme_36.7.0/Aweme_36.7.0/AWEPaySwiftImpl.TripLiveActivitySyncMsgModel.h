@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.TripLiveActivitySyncMsgModel : MTLModel <MTLJSONSerializing> {
    void /* function */ msgType;
    void /* function */ event;
    void /* function */ contentState;
}

@property (nonatomic, copy) NSString *msgType;
@property (nonatomic, copy) NSString *event;
@property (nonatomic, copy) NSDictionary *contentState;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
