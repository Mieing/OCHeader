@class NSArray, NSString;

@interface WCStatusPrivacySetting : MMObject <PBCoding>

@property (nonatomic) long long privacy;
@property (retain, nonatomic) NSArray *selectUserNames;
@property (retain, nonatomic) NSArray *selectTags;
@property (retain, nonatomic) NSArray *recentSelectedChatroom;
@property (retain, nonatomic) NSArray *selectContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_selectUserNames;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
