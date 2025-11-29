@class NSString, NSArray;

@interface GroupNoticeItem : FavoritesItem

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSArray *skipDownloadType;

+ (id)itemFromFavItem:(id)a0;
+ (id)itemFromText:(id)a0;
+ (id)itemFromXml:(id)a0;

- (id)description;
- (BOOL)isEmptyContent;
- (id)generateAbstractSummary;
- (id)generateDetailSummary;
- (BOOL)hasMediaItem;
- (BOOL)isSameItem:(id)a0;
- (BOOL)isHtmlDataField:(id)a0;
- (BOOL)shouldDownloadData:(id)a0;
- (void)bindWithMsgWrap:(id)a0;
- (void)moveDataFromTmpPathToFormalPathIfNeed;
- (void)setToUsr:(id)a0;
- (void)setSourceId:(id)a0;
- (void)setMsgLocalId:(unsigned int)a0;
- (BOOL)needDownLoad;
- (void).cxx_destruct;

@end
