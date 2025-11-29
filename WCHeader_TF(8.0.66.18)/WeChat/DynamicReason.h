@class NSString, FinderColor;

@interface DynamicReason : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dynamicReason;
@property (retain, nonatomic) FinderColor *color;
@property (nonatomic) unsigned int reasonLocation;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setReasonLocation:(unsigned int)a0;
- (unsigned int)reasonLocation;
- (void)setColor:(id)a0;
- (id)color;
- (void)setDynamicReason:(id)a0;
- (id)dynamicReason;
- (id)archivedWCTValue;

@end
