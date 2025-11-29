@class NSString;

@interface AWEIMCombineShareSubMessage : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long uid;
@property (retain, nonatomic) NSString *secUid;
@property (nonatomic) long long createTime;
@property (nonatomic) long long serverMessageId;
@property (nonatomic) long long messageType;
@property (nonatomic) long long aweType;
@property (nonatomic) BOOL showFlag;
@property (nonatomic) int refMsgInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
