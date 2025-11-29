@class NSString, AWEServerPermissionFailedInfoModel;

@interface AWEServerPermissionActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long level;
@property (retain, nonatomic) AWEServerPermissionFailedInfoModel *failedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)failedInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
