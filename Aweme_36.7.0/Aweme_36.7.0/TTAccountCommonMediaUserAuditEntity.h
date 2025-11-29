@class NSNumber;

@interface TTAccountCommonMediaUserAuditEntity : TTAccountUserAuditEntity

@property (nonatomic) BOOL auditing;
@property (retain, nonatomic) NSNumber *auditType;
@property (nonatomic) BOOL isPersonalPGC;

- (id)initWithMediaAuditModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
