@class NSString;

@interface OccupyMsgRevokeInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int localID;
@property (nonatomic) unsigned long long msgSvrID;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *overwriteMsgID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_msgSvrID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_overwriteMsgID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithMessageWrap:(id)a0;
- (void).cxx_destruct;

@end
