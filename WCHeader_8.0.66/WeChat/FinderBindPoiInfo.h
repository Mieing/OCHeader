@class NSString, SnsPoiDetail, FinderBindPoiInfo_AuditInfo;

@interface FinderBindPoiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SnsPoiDetail *poiDetail;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) FinderBindPoiInfo_AuditInfo *auditInfo;

+ (void)initialize;

@end
