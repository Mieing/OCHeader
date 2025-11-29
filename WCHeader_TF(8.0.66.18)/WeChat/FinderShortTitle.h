@class NSString;

@interface FinderShortTitle : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shortTitle;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setShortTitle:(id)a0;
- (id)shortTitle;
- (id)archivedWCTValue;

@end
