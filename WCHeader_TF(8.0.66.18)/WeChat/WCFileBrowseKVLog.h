@class NSMutableSet;

@interface WCFileBrowseKVLog : NSObject

@property (nonatomic) unsigned int hasConfirm;
@property (nonatomic) unsigned int switchToChat;
@property (nonatomic) unsigned int switchToFav;
@property (nonatomic) unsigned int switchToCloud;
@property (nonatomic) unsigned int switchToAlbum;
@property (nonatomic) unsigned int hasClickSearch;
@property (nonatomic) unsigned int hasClickDetail;
@property (nonatomic) unsigned int chatFileCount;
@property (nonatomic) unsigned int favFileCount;
@property (nonatomic) unsigned int cloudFileCount;
@property (nonatomic) unsigned int albumFileCount;
@property (nonatomic) unsigned int firstScreenCount;
@property (nonatomic) unsigned int belowScreenCount;
@property (retain, nonatomic) NSMutableSet *keywordSet;
@property (nonatomic) int firstAssetIndex;
@property (nonatomic) int firstScreenAssetNum;

- (id)init;
- (void)report19359;
- (void).cxx_destruct;

@end
