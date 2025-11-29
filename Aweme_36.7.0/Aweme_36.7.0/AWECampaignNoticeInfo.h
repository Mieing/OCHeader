@class NSString;

@interface AWECampaignNoticeInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *campaignID;
@property (copy, nonatomic) NSString *bgImageURL;
@property (copy, nonatomic) NSString *titleImageURL;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *multiSchema;
@property (copy, nonatomic) NSString *tabText;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic) BOOL disablePullGuide;
@property (nonatomic) BOOL ignoreAuditingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
