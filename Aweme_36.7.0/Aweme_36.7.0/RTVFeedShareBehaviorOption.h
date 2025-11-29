@class NSString;

@interface RTVFeedShareBehaviorOption : JSONModel <RTVBehaviorOptionProtocol>

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) int insertAwemeType;
@property (nonatomic) long long insertAwemeProgress;
@property (nonatomic) int type;
@property (nonatomic) int initialStreamType;
@property (copy, nonatomic) NSString *liveRoomID;
@property (copy, nonatomic) NSString *liveOwnerID;
@property (nonatomic) long long backToPageType;
@property (nonatomic) long long autoShowCastVideoTabType;
@property (copy, nonatomic) NSString *followUserID;
@property (nonatomic) BOOL trackInfoAllFromEventParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelToJSONDictionary;
+ (id)keyMapperKeys;
+ (id)key;

- (void).cxx_destruct;

@end
