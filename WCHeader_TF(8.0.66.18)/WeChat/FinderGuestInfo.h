@interface FinderGuestInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int guestType;
@property (nonatomic) unsigned int showType;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;
- (void)setGuestType:(unsigned int)a0;
- (unsigned int)guestType;
- (id)archivedWCTValue;

@end
