@interface TingMusicBridge : NSObject

+ (id)listenMusicInfoFromMusicInfo:(id)a0;
+ (id)listenArticleInfoFromMusicInfo:(id)a0;
+ (id)musicInfoFromListenMusicInfo:(id)a0;
+ (void)copyPropertiesFromListenMusicInfo:(id)a0 toMMMusicInfo:(id)a1;
+ (id)musicInfoFromTingItem:(id)a0;
+ (id)createListenItem;
+ (id)tingItemFromMusicInfo:(id)a0 type:(int)a1;
+ (id)musicInfoFromWCDataItem:(id)a0;
+ (id)tingItemFromMessageWrap:(id)a0 readerWrap:(id)a1 index:(int)a2;
+ (id)tingItemFromChatMessageWrap:(id)a0;
+ (id)tingItemFromLyricsMessageWrap:(id)a0;
+ (id)tingItemFromMomentDataItem:(id)a0;
+ (id)finderInfoFromWCFinderDataItem:(id)a0;
+ (id)tingItemFromWCFinderDataItem:(id)a0 type:(int)a1;
+ (id)tingItemFromMPArticleUrl:(id)a0;
+ (id)tingItemFromLocalFileInfo:(id)a0;
+ (id)tingItemFromLocalFileDataInfo:(id)a0;
+ (id)tingLocalFileInfoFromMessageWrap:(id)a0;
+ (id)tingLocalFileInfoFromFavData:(id)a0;
+ (id)tingLocalFileInfoFromMsgRecordDataWrap:(id)a0;
+ (id)tingLocalFileInfoFromGroupNoticeItem:(id)a0 favData:(id)a1;
+ (id)tingLocalFileInfoFromFavItem:(id)a0 favData:(id)a1;
+ (id)tingItemFromListenPlayableInfo:(id)a0;
+ (id)categoryItemFromRawDictionary:(id)a0;

@end
