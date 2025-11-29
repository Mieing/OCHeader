@class NSString, AWEFeedPlayablePermissionModel;

@interface AWEFeedPlayableComplianceInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) AWEFeedPlayablePermissionModel *permissions;
@property (retain, nonatomic) AWEFeedPlayablePermissionModel *privacy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showCompanyView;
- (void).cxx_destruct;

@end
