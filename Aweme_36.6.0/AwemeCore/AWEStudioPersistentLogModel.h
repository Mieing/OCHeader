@class NSString;

@interface AWEStudioPersistentLogModel : NSObject <AWEStudioPersistentLogData, WCTTableCoding>

@property (nonatomic) long long idx;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *creationid;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (id)createInstance;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)creationid;
+ (const void *)uid;
+ (const void *)time;
+ (const void *)text;
+ (const void *)type;
+ (const void *)level;
+ (const void *)idx;

- (void).cxx_destruct;

@end
