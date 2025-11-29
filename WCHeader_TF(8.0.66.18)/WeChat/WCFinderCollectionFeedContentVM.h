@class NSString, FinderCollectionInfo, WCFinderFavoriteCollectionFlowConfiguration, FinderHistoryCollectionInfo, WCFinderContact;

@interface WCFinderCollectionFeedContentVM : WCFinderFeedContentVM

@property (retain, nonatomic) NSString *pTid;
@property (nonatomic) BOOL displayAsFeedCard;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) FinderHistoryCollectionInfo *historyInfo;
@property (nonatomic) unsigned long long lastPlayTime;
@property (retain, nonatomic) WCFinderFavoriteCollectionFlowConfiguration *cellConfig;

+ (id)feedArrayCopyVMFromExistVM:(id)a0 scene:(int)a1;

- (id)initWithCollectionInfo:(id)a0 scene:(int)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)contentTid;
- (BOOL)existMediaContent;
- (id)makeCellConfig;
- (void).cxx_destruct;

@end
