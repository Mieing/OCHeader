@interface IESLiveKTVMultiChorusUtil : NSObject

+ (void)processMultiChorusInfoForSongListResp:(id)a0;
+ (void)processMultiChorusInfoForMusic:(id)a0 usingMultiChorusInfo:(id)a1;
+ (void)processMultiChorusInfoForMusic:(id)a0 usingMultiChoursListItem:(id)a1 multiChoursSongItem:(id)a2 currentLoginUserID:(id)a3;
+ (void)processMultiChorusInfoForMusic:(id)a0 usingUserIdsArray:(id)a1 userBaseMap:(id)a2 currentLoginUserID:(id)a3;
+ (void)updateKTVMessageListInfoArray:(id)a0 usingMultiKTVOrderList:(id)a1;

@end
