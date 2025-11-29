@class WCTDatabase, WCTTable;

@interface GameCenterMsgDb : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *table;

- (BOOL)initDb;
- (void)batchUpdate:(id)a0;
- (void)runTransaction:(id /* block */)a0;
- (unsigned int)saveMsgToDB:(id)a0;
- (id)getMsgByLocalId:(unsigned int)a0;
- (BOOL)deleteAllMsg;
- (BOOL)deleteMsgByServerId:(id)a0;
- (BOOL)deleteMsgByLocalId:(int)a0;
- (BOOL)deleteMsgBeforeTimeStamp:(unsigned int)a0;
- (BOOL)deleteMsgByReportType:(unsigned int)a0;
- (BOOL)deleteMsgByShowType:(unsigned int)a0;
- (BOOL)hideAllMsgByShowType:(unsigned int)a0;
- (BOOL)unhideAllMsgByShowType:(unsigned int)a0;
- (BOOL)deleteMsgByLocalIdList:(id)a0;
- (BOOL)updateContentIdCanNotShow:(id)a0;
- (id)getClickMsgWithSameContentIdWithMsg:(id)a0;
- (BOOL)updateMsg:(unsigned int)a0 exposureCnt:(unsigned int)a1;
- (BOOL)updateMsg:(unsigned int)a0 completeExposureCnt:(unsigned int)a1;
- (BOOL)updateMsg:(unsigned int)a0 msgState:(int)a1;
- (BOOL)updateMsgFirstExposureTime:(id)a0;
- (BOOL)updateMsgWithSvrMsgId:(id)a0 score:(float)a1;
- (BOOL)updateMsg:(id)a0 withExposureState:(unsigned long long)a1;
- (id)getReExposureMsgList;
- (id)getAllQueueType1StateNoneMsgList;
- (id)getMsgCenterUnreadList;
- (id)getMsgCenterReadListBefore:(unsigned int)a0;
- (id)getMsgCenterListWithShowType:(int)a0 readState:(int)a1 oldThan:(unsigned int)a2 maxCount:(unsigned int)a3;
- (id)getMsgListByPageForJsApi:(int)a0 lastLocalId:(int)a1 onlyUnRead:(BOOL)a2 maxCount:(int)a3 subMsgType:(int)a4;
- (id)getMsgListByPage:(int)a0 lastLocalId:(int)a1 maxCount:(int)a2;
- (BOOL)setMsgCenterOneMsgRead:(unsigned int)a0;
- (BOOL)setMsgCenterAllRead;
- (BOOL)setMsgCenterAllReadWithShowType:(unsigned int)a0;
- (BOOL)setMsgReadWithLocalIdList:(id)a0;
- (BOOL)setExistRedPointCanNotShow;
- (id)getAllMsg;
- (BOOL)createTable;
- (BOOL)isMsgExistBySvrMsgId:(id)a0;
- (id)getMsgBySvrMsgId:(id)a0;
- (id)getMsgListByPushId:(id)a0;
- (void)closeDbBeforeInit;
- (id)getDbPath;
- (struct Expression { void /* function */ **x0; struct Identifier *x1; struct shared_ptr<WCDB::StringView> { struct StringView *x0; struct __shared_weak_count *x1; } x2; BOOL x3; struct Expression { void /* function */ **x0; char x1; char x2; char x3; union { struct LiteralValue { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; union { double x0; long long x1; unsigned long long x2; BOOL x3; } x3; } x0; struct BindParameter { void /* function */ **x0; union { char x0; char x1; } x1; int x2; struct StringView { char *x0; unsigned long long x1; void *x2; } x3; } x1; struct Column { void /* function */ **x0; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; BOOL x3; struct StringView { char *x0; unsigned long long x1; void *x2; } x4; struct function<const WCDB::BaseBinding *()> { struct __value_func<const WCDB::BaseBinding *()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x5; struct BaseBinding *x6; } x2; struct RaiseFunction { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; } x3; struct WindowDef { void /* function */ **x0; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x1; struct list<WCDB::Syntax::OrderingTerm, std::allocator<WCDB::Syntax::OrderingTerm>> { struct __list_node_base<WCDB::Syntax::OrderingTerm, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::OrderingTerm, void *>>> { unsigned long long x0; } x1; } x2; struct Optional<WCDB::Syntax::FrameSpec> { BOOL x0; union { char x0; struct FrameSpec { void /* function */ **x0; union { char x0; char x1; } x1; char x2; char x3; char x4; BOOL x5; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x6; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x7; } x1; } x1; } x3; } x4; struct StringView { char *x0; unsigned long long x1; void *x2; } x5; } x4; union { struct Shadow<WCDB::Syntax::SelectSTMT> { struct shared_ptr<WCDB::Syntax::SelectSTMT> { struct SelectSTMT *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x2; struct Filter { void /* function */ **x0; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x1; } x3; } x5; union { struct StringView { char *x0; unsigned long long x1; void *x2; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x6; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x7; union { char x0; char x1; } x8; char x9; char x10; BOOL x11; BOOL x12; char x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; char x18; } x4; void /* function */ **x5; void /* function */ **x6; void /* function */ **x7; void /* function */ **x8; void /* function */ **x9; void /* function */ **x10; void /* function */ **x11; void /* function */ **x12; })buildWhereCondition:(int)a0 lastLocalId:(int)a1 showType:(int)a2 onlyUnRead:(BOOL)a3;
- (struct Expression { void /* function */ **x0; struct Identifier *x1; struct shared_ptr<WCDB::StringView> { struct StringView *x0; struct __shared_weak_count *x1; } x2; BOOL x3; struct Expression { void /* function */ **x0; char x1; char x2; char x3; union { struct LiteralValue { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; union { double x0; long long x1; unsigned long long x2; BOOL x3; } x3; } x0; struct BindParameter { void /* function */ **x0; union { char x0; char x1; } x1; int x2; struct StringView { char *x0; unsigned long long x1; void *x2; } x3; } x1; struct Column { void /* function */ **x0; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; BOOL x3; struct StringView { char *x0; unsigned long long x1; void *x2; } x4; struct function<const WCDB::BaseBinding *()> { struct __value_func<const WCDB::BaseBinding *()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x5; struct BaseBinding *x6; } x2; struct RaiseFunction { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; } x3; struct WindowDef { void /* function */ **x0; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x1; struct list<WCDB::Syntax::OrderingTerm, std::allocator<WCDB::Syntax::OrderingTerm>> { struct __list_node_base<WCDB::Syntax::OrderingTerm, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::OrderingTerm, void *>>> { unsigned long long x0; } x1; } x2; struct Optional<WCDB::Syntax::FrameSpec> { BOOL x0; union { char x0; struct FrameSpec { void /* function */ **x0; union { char x0; char x1; } x1; char x2; char x3; char x4; BOOL x5; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x6; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x7; } x1; } x1; } x3; } x4; struct StringView { char *x0; unsigned long long x1; void *x2; } x5; } x4; union { struct Shadow<WCDB::Syntax::SelectSTMT> { struct shared_ptr<WCDB::Syntax::SelectSTMT> { struct SelectSTMT *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x2; struct Filter { void /* function */ **x0; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x1; } x3; } x5; union { struct StringView { char *x0; unsigned long long x1; void *x2; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x6; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x7; union { char x0; char x1; } x8; char x9; char x10; BOOL x11; BOOL x12; char x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; char x18; } x4; void /* function */ **x5; void /* function */ **x6; void /* function */ **x7; void /* function */ **x8; void /* function */ **x9; void /* function */ **x10; void /* function */ **x11; void /* function */ **x12; })buildWhereCondition:(int)a0 lastLocalId:(int)a1 showType:(int)a2 readState:(int)a3;
- (id)getMsgNeedMergeWith:(id)a0;
- (id)getNewMsgNeedMergeWith:(id)a0;
- (id)getLastUnreadMsgWithType:(int)a0;
- (unsigned int)getDBFileSize;
- (unsigned int)getMsgUnreadCoutWithShowType:(int)a0;
- (id)getLastMessageWithShowType:(int)a0;
- (unsigned int)getCountWithReportType:(unsigned int)a0 unRead:(BOOL)a1;
- (void)updateInteractMsgWithLocalId:(unsigned int)a0 isGreet:(BOOL)a1 relationType:(unsigned int)a2;
- (BOOL)cleanMsgByShowType:(unsigned int)a0 beforeTimestamp:(unsigned int)a1;
- (BOOL)cleanMsgByShowType:(unsigned int)a0 retainCount:(unsigned int)a1;
- (unsigned int)getAllRecordCount;
- (id)debugDBStatus;
- (void)reddotReExposure;
- (void).cxx_destruct;

@end
