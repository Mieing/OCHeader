@class NSString, NSMutableDictionary;

@interface WXTalkPresentMgr : MMUserService <MMServiceProtocol, IMsgExt> {
    BOOL _isInfoListLoaded;
}

@property (retain, nonatomic) NSMutableDictionary *infoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (id)getRoomInfoFromMessageWrap:(id)a0;
- (void)handleWXTalkRoomInfoMessage:(id)a0 withMessageWrap:(id)a1;
- (BOOL)writeToFile:(id)a0 data:(id)a1;
- (void)saveWXTalkRoomInfoList;
- (BOOL)loadWXTalkRoomInfoList;
- (BOOL)isTalkRoomEmpty:(id)a0;
- (BOOL)isTrackMode:(id)a0;
- (void).cxx_destruct;

@end
