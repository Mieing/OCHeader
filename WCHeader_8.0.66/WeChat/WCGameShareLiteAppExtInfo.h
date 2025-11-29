@class NSString;

@interface WCGameShareLiteAppExtInfo : NSObject <NSCoding, PBCoding>

@property (copy, nonatomic) NSString *bizData;
@property (nonatomic) unsigned int priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizData;
+ (void)PBArrayAdd_priority;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
