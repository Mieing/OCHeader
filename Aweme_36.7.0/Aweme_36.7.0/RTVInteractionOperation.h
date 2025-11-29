@class NSString, NSArray;

@interface RTVInteractionOperation : JSONModel <RTVInteractionJSONModelProtocol>

@property (nonatomic) long long operationID;
@property (nonatomic) long long serverVersion;
@property (nonatomic) long long roomID;
@property (nonatomic) long long operationRole;
@property (nonatomic) long long businessType;
@property (nonatomic) long long businessMethod;
@property (copy, nonatomic) NSString *businessJson;
@property (copy, nonatomic) NSArray *toUserIDs;
@property (nonatomic) long long fromUserID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void)fixOperationID:(long long)a0;
- (void)setupOwnerOperationWithSelfID:(id)a0;
- (void)updateSource:(long long)a0;
- (id)contentDynamicCast:(Class)a0;
- (id)initWithRoomID:(long long)a0 businessType:(long long)a1 businessMethod:(long long)a2 businessData:(id)a3 toUserIDs:(id)a4;
- (void)updateServerVersion:(long long)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
