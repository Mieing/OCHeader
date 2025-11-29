@class NSString, FinderCollectionInfo, FinderContact;

@interface WCFinderHistoryCollectionItem : NSObject <WCFinderFeedArrayConvert, PBCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned long long lastPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedArrayConvertTidFromObject:(id)a0;
+ (id)feedArrayConvertVMFromItem:(id)a0 scene:(int)a1;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_lastPlayTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
