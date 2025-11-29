@class NSString;

@interface FinderObjectWordingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int wordingType;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setWordingType:(unsigned int)a0;
- (unsigned int)wordingType;
- (void)setWording:(id)a0;
- (id)wording;
- (id)archivedWCTValue;

@end
