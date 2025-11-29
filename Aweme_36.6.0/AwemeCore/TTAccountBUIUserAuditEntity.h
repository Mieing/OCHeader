@class NSString, TTAccountUserAuditEntity, NSDictionary, NSNumber;

@interface TTAccountBUIUserAuditEntity : TTAccountBaseEntity

@property (nonatomic) BOOL isAuditing;
@property (copy, nonatomic) NSString *unpassReason;
@property (retain, nonatomic) NSNumber *auditStatus;
@property (retain, nonatomic) NSNumber *lastUpdateTime;
@property (retain, nonatomic) TTAccountUserAuditEntity *auditInfo;
@property (copy, nonatomic) NSDictionary *details;

+ (unsigned long long)modelCustomMappingOptions;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
