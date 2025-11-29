@class NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface WeChat.PredownloadC2CHistoryRecord : WeChat.PredownloadHistoryRecord <WCTTableCoding, PredownloadHistoryRecordIdentifiable> {
    void /* unknown type, empty encoding */ svrID;
    void /* unknown type, empty encoding */ localID;
    void /* unknown type, empty encoding */ chatName;
    void /* unknown type, empty encoding */ media;
}

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *svrID;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *localID;
@property (nonatomic, copy) NSString *chatName;
@property (nonatomic, copy) NSString *media;
@property (nonatomic, readonly) NSString *description;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_date;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_size;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (const void *)serverPriority;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_serverPriority;
+ (const void *)clientPriority;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_clientPriority;
+ (const void *)downloadState;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_downloadState;
+ (const void *)downloadRetries;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_downloadRetries;
+ (const void *)sizeThatStartPredownload;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_sizeThatStartPredownload;
+ (const void *)skipQuota;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_skipQuota;
+ (void)__wcdb_index_11:(void *)a0;
+ (const void *)svrID;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_svrID;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_localID;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_chatName;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (const void *)media;
+ (const void *)__wcdb_synthesize_18:(void *)a0;
+ (id)swift_media;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (void)__wcdb_table_constraint_20:(void *)a0;
+ (void)__wcdb_table_constraint_21:(void *)a0;
+ (void)__wcdb_table_constraint_22:(void *)a0;
+ (void)__wcdb_table_constraint_23:(void *)a0;
+ (struct Expression { void /* function */ **x0; struct Identifier *x1; struct shared_ptr<WCDB::StringView> { struct StringView *x0; struct __shared_weak_count *x1; } x2; BOOL x3; struct Expression { void /* function */ **x0; char x1; char x2; char x3; union { struct LiteralValue { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; union { double x0; long long x1; unsigned long long x2; BOOL x3; } x3; } x0; struct BindParameter { void /* function */ **x0; union { char x0; char x1; } x1; int x2; struct StringView { char *x0; unsigned long long x1; void *x2; } x3; } x1; struct Column { void /* function */ **x0; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; BOOL x3; struct StringView { char *x0; unsigned long long x1; void *x2; } x4; struct function<const WCDB::BaseBinding *()> { struct __value_func<const WCDB::BaseBinding *()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x5; struct BaseBinding *x6; } x2; struct RaiseFunction { void /* function */ **x0; union { char x0; char x1; } x1; struct StringView { char *x0; unsigned long long x1; void *x2; } x2; } x3; struct WindowDef { void /* function */ **x0; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x1; struct list<WCDB::Syntax::OrderingTerm, std::allocator<WCDB::Syntax::OrderingTerm>> { struct __list_node_base<WCDB::Syntax::OrderingTerm, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::OrderingTerm, void *>>> { unsigned long long x0; } x1; } x2; struct Optional<WCDB::Syntax::FrameSpec> { BOOL x0; union { char x0; struct FrameSpec { void /* function */ **x0; union { char x0; char x1; } x1; char x2; char x3; char x4; BOOL x5; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x6; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x7; } x1; } x1; } x3; } x4; struct StringView { char *x0; unsigned long long x1; void *x2; } x5; } x4; union { struct Shadow<WCDB::Syntax::SelectSTMT> { struct shared_ptr<WCDB::Syntax::SelectSTMT> { struct SelectSTMT *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; struct Schema { void /* function */ **x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x2; struct Filter { void /* function */ **x0; struct Shadow<WCDB::Syntax::Expression> { struct shared_ptr<WCDB::Syntax::Expression> { struct Expression *x0; struct __shared_weak_count *x1; } x0; BOOL x1; } x1; } x3; } x5; union { struct StringView { char *x0; unsigned long long x1; void *x2; } x0; struct StringView { char *x0; unsigned long long x1; void *x2; } x1; } x6; struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> { struct __list_node_base<WCDB::Syntax::Expression, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> { unsigned long long x0; } x1; } x7; union { char x0; char x1; } x8; char x9; char x10; BOOL x11; BOOL x12; char x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; char x18; } x4; void /* function */ **x5; void /* function */ **x6; void /* function */ **x7; void /* function */ **x8; void /* function */ **x9; void /* function */ **x10; void /* function */ **x11; void /* function */ **x12; })identified:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
