@class NSMutableArray, FinderLiveContact;

@interface MMFinderLiveFansGroupMemberSectionInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactList;
@property (nonatomic) unsigned int memberCount;
@property (nonatomic) unsigned int superfanCount;
@property (nonatomic) unsigned long long currentVersion;
@property (retain, nonatomic) FinderLiveContact *selfContact;
@property (nonatomic) unsigned int selfIntimacyToPrevRank;
@property (nonatomic) unsigned int selfRank;

- (void)appendContactList:(id)a0;
- (void)resetContactList:(id)a0;
- (id)getFansGroupName;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
