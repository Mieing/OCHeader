@class NSString, MMFinderLiveGestureInfo;

@interface MMFinderLiveGestureRecord : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int gestureId;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) MMFinderLiveGestureInfo *gestureInfo;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)gestureId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_gestureId;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_version;
+ (const void *)gestureInfo;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_gestureInfo;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_schemaVersion;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
