@class MemoryMappedKV, NSString, WCStatTimerHelper, NSMutableArray, Log_IMOperation;

@interface SessionActionStatMgr : MMUserService <IContactMgrExt, IMMNewSessionMgrExt, IMsgExt, MMServiceProtocol> {
    NSMutableArray *_actionList;
    MemoryMappedKV *_actionStorage;
    BOOL _bDidEnterChatRoom;
    unsigned int _uiStayWebViewTime;
    WCStatTimerHelper *_oStatTimerHelper;
    struct map<unsigned long, NSMutableDictionary *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary *>>> { struct __tree<std::__value_type<unsigned long, NSMutableDictionary *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, NSMutableDictionary *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, NSMutableDictionary *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, NSMutableDictionary *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, NSMutableDictionary *>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _mapExpourseTypeToDic;
    Log_IMOperation *_Log_IMOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)tryLoadSessionActionCache;
- (unsigned int)getMaxCacheTime;
- (unsigned int)getMaxCacheLogCount;
- (int)getSessionTypeWithContact:(id)a0;
- (BOOL)hadExposuredWithMessageId:(unsigned long long)a0 expourseType:(unsigned long long)a1;
- (void)markExposuredWithMessageId:(unsigned long long)a0 expourseType:(unsigned long long)a1;
- (void)clearExposureMsgIdDic;
- (id)getFromChatRoomWithMsgWrap:(id)a0;
- (id)getPosterUserNameWithMsgWrap:(id)a0;
- (void)enterChatRoom;
- (void)recordStayWebViewTimeInMS:(unsigned long long)a0;
- (void)exitChatRoom:(id)a0 beginTime:(unsigned int)a1 unreadCount:(unsigned int)a2;
- (void)tryUploadActionList;
- (void)uploadActionList;
- (BOOL)needUploadIMOperationKV;
- (BOOL)needUploadIMOperationPB;
- (void)initIMOperation;
- (void)startRecordIMOperation;
- (void)addIMBehaviorMsgOp:(unsigned int)a0 appMsgInnerType:(unsigned int)a1 msgOpType:(int)a2;
- (void)reportMsgOperation:(id)a0;
- (void)addIMBehaviorContactExpose:(id)a0 scene:(unsigned int)a1;
- (void)addIMBehaviorContactOp:(id)a0 contactOpType:(int)a1;
- (id)strAppendKeyValue:(id)a0 key:(id)a1 value:(id)a2;
- (void)reportLogIMOperation:(id)a0;
- (void)onSessionTopStatusChanged:(id)a0 bTop:(BOOL)a1;
- (void)OnChangeNotifyStatus:(id)a0 withStatus:(BOOL)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
