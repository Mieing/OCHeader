@class NSArray, NSString;

@interface WCCommitPrivacySetting : MMObject <PBCoding>

@property (nonatomic) long long privacy;
@property (retain, nonatomic) NSArray *selectContacts;
@property (retain, nonatomic) NSArray *selectTags;
@property (retain, nonatomic) NSArray *recentSelectedChatroom;
@property (nonatomic) BOOL isDynamicTagEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_selectContacts;
+ (void)PBArrayAdd_selectTags;
+ (void)PBArrayAdd_recentSelectedChatroom;
+ (void)PBArrayAdd_isDynamicTagEnabled;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
