@class NSString, _TtC6WeChat17WCDBIntegerNumber;

@interface WeChat.PredownloadPriorityQuota : NSObject <WCTTableCoding> {
    void /* unknown type, empty encoding */ count;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ quota;
}

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *count;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *priority;
@property (nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *quota;
@property (nonatomic, readonly) NSString *description;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)count;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_count;
+ (const void *)priority;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_priority;
+ (const void *)quota;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_quota;

- (id)init;

@end
