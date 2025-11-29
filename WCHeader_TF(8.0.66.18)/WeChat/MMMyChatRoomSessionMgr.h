@class NSString, NSMutableDictionary;

@interface MMMyChatRoomSessionMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (nonatomic) BOOL hasPreLoadCache;
@property (retain, nonatomic) NSMutableDictionary *dicMyChatTimeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)loadMyChatTimeIfNeeded;
- (BOOL)hasLoaded;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
