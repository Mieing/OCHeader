@class NSArray, NSString;

@interface GameCenterPromotedGamesFeedsItem : MMObject <PBCoding>

@property (retain, nonatomic) NSArray *usernameList;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSArray *nicknameList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_usernameList;
+ (void)PBArrayAdd_detail;
+ (void)PBArrayAdd_nicknameList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
