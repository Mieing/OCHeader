@class NSString;

@interface ReceivePatWrap : NSObject <PBCoding>

@property (nonatomic) long long serverId;
@property (retain, nonatomic) NSString *chatUserName;
@property (nonatomic) unsigned long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_serverId;
+ (void)PBArrayAdd_chatUserName;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
