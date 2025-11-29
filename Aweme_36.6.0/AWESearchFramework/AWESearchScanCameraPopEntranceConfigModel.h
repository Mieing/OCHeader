@class NSDictionary, NSString, AWESearchScanCameraPopEntranceStyleModel;

@interface AWESearchScanCameraPopEntranceConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long version;
@property (nonatomic) long long maxTimes;
@property (copy, nonatomic) NSDictionary *styles;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceStyleModel *styleInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
