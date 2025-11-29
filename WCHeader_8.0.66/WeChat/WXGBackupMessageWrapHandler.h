@class BakChatMsgItem, WXGBackupEmoticonConverter, NSMutableArray;

@interface WXGBackupMessageWrapHandler : NSObject {
    WXGBackupEmoticonConverter *m_emoticonConverter;
    NSMutableArray *m_mediaStructArray;
    BakChatMsgItem *m_bakChatItem;
    NSMutableArray *m_mediaIDArray;
    NSMutableArray *m_mediaTypeArray;
    NSMutableArray *m_mediaIDArrayFastly;
    NSMutableArray *m_mediaTypeArrayFastly;
    NSMutableArray *m_mediaPathArrayFastly;
    BOOL m_bHandleRoam;
}

@property (nonatomic) long long mediaFormatSupport;
@property (nonatomic) BOOL isRoamBackup;
@property (nonatomic) BOOL isFastRoamBackup;
@property (nonatomic) BOOL isTextOnly;
@property (nonatomic) BOOL isSupportWxam;

+ (id)_getPrefix:(id)a0 inRecordDataFields:(id)a1 prefix:(id)a2;

- (id)init;
- (void)dealloc;
- (void)handleRoamMessageWrapFastly:(id)a0 RoamMsgItem:(id)a1 RoamMediaInfo:(id)a2 TextOnly:(BOOL)a3 needStatus:(BOOL)a4;
- (id)handleRoamMessageWrap:(id)a0;
- (id)handleMessageWrap:(id)a0;
- (id)handleMessageWrap:(id)a0 mediaFormatSupport:(int)a1;
- (id)p_handleMessageWrap:(id)a0;
- (id)covertNewXmlMsgIfNeed:(id)a0;
- (id)covertSolitaireMsgToTextMsg:(id)a0;
- (id)getBackupHEIFConvertPathWithExtension:(id)a0;
- (BOOL)p_messageWrapHasMedia:(id)a0;
- (void)p_getMediaInfoForMessageWrap:(id)a0;
- (void)p_getMediaForImg:(id)a0;
- (void)p_getMediaForVoice:(id)a0;
- (void)p_getMediaForVideo:(id)a0;
- (void)p_getMediaForSight:(id)a0;
- (void)p_getMediaForEmoticon:(id)a0;
- (void)p_getMediaForAppMsg:(id)a0;
- (void)p_innerGetNestedMediaForAppMsgDataList:(id)a0 withPrefixExtension:(id)a1 ofMsgWrap:(id)a2;
- (void)p_innerGetMediaForAppMsgFav:(id)a0;
- (void)p_innerGetMediaForGroupNoticeMsg:(id)a0;
- (void)p_innerGetMediaForAppMsg:(id)a0;
- (void)p_getMediaForHistorySysNewXml:(id)a0;
- (void)p_innerGetMediaForHistoryDataList:(id)a0 withPrefixExtension:(id)a1 ofMessageWrap:(id)a2;
- (void)addMediaStructWithMediaID:(id)a0 withMediaPath:(id)a1 withMediaType:(int)a2 withMediaCdnUrl:(id)a3 withMediaCdnType:(unsigned int)a4 withMediaCdnSize:(unsigned long long)a5 withMediaAesKey:(id)a6 withMessageWrap:(id)a7;
- (void)addMediaStructWithMediaIDFastly:(id)a0 withMediaPath:(id)a1 withMediaType:(int)a2 withMessageWrap:(id)a3;
- (id)getMediaIDForMessage:(id)a0 dataID:(id)a1;
- (id)_getHDLiveMediaIDForMessageWrap:(id)a0;
- (id)_getLiveMediaIDForMessageWrap:(id)a0;
- (id)_getHDMediaIDForMessageWrap:(id)a0;
- (id)_getMediaIDForMessageWrap:(id)a0;
- (id)_getThumbMediaIDForMessageWrap:(id)a0;
- (id)_getGNThumbMediaIDForMessageWrap:(id)a0 withIndex:(unsigned int)a1;
- (id)_getGNDataMediaIDForMessageWrap:(id)a0 withIndex:(unsigned int)a1;
- (id)_getMediaIDForMsgWrap:(id)a0 withSuffix:(id)a1;
- (id)_getMediaIDForMsgWrapThumb:(id)a0 withSuffix:(id)a1;
- (id)_getMeidaIDForHistoryMessageWrap:(id)a0 withExtension:(id)a1;
- (id)_getMeidaIDForThumbHistoryMessageWrap:(id)a0 withExtension:(id)a1;
- (void).cxx_destruct;

@end
