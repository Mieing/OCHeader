@class NSString, NSMutableDictionary, NSMutableArray;

@interface WCChatRoomMemberNoNickDataInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicUserNameTime;
@property (retain, nonatomic) NSMutableArray *arrUserNameTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicUserNameTime;
+ (void)PBArrayAdd_arrUserNameTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
