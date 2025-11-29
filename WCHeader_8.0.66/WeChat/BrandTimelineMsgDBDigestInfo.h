@class NSString, NSMutableArray;

@interface BrandTimelineMsgDBDigestInfo : MMObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *strategyInfo;
@property (nonatomic) unsigned int flag;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)initWithDigestInfo:(id)a0;
- (id)initFromJson:(id)a0;
- (void)internalInit:(id)a0;
- (id)toJson;
- (id)genAttrDigest:(BOOL)a0;
- (id)genReportDigest;
- (void).cxx_destruct;

@end
