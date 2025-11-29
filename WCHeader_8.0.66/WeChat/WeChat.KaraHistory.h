@class NSString;

@interface WeChat.KaraHistory : NSObject <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) void /* unknown type, empty encoding */ countThatHappened;
@property (nonatomic) void /* unknown type, empty encoding */ countThatRecalled;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)countThatHappened;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_countThatHappened;
+ (const void *)countThatRecalled;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_countThatRecalled;

- (id)init;

@end
