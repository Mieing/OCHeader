@class FinderContact;

@interface FinderMentionContact : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) unsigned long long fansId;
@property (nonatomic) unsigned int relationType;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setRelationType:(unsigned int)a0;
- (unsigned int)relationType;
- (void)setFansId:(unsigned long long)a0;
- (unsigned long long)fansId;
- (void)setIsSelf:(BOOL)a0;
- (BOOL)isSelf;
- (void)setContact:(id)a0;
- (id)contact;
- (id)archivedWCTValue;

@end
