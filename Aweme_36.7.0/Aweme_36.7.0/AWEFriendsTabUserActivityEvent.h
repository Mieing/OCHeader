@class NSString;

@interface AWEFriendsTabUserActivityEvent : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)ss_timestamp;
+ (id)swift_ss_timestamp;
+ (const void *)ss_eventType;
+ (id)swift_ss_eventType;
+ (id)__constraintPrimaryKeys;
+ (const void *)timestamp;
+ (const void *)eventType;
+ (const void *)allProperties;
+ (id)eventWithType:(long long)a0;


@end
