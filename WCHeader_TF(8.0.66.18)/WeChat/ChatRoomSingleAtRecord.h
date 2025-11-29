@class NSString;

@interface ChatRoomSingleAtRecord : MMObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithUserName:(id)a0;
- (void).cxx_destruct;

@end
