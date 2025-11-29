@interface WeChat.WCDBIntegerNumber : NSObject <WCTColumnCoding>

@property (nonatomic, retain) void /* unknown type, empty encoding */ underlying;

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)a0;

- (id)archivedWCTValue;
- (id)init:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
