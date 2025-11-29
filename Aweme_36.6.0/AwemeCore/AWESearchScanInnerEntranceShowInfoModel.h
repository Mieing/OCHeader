@class NSString;

@interface AWESearchScanInnerEntranceShowInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double dayInfo;
@property (nonatomic) long long showTimes;
@property (nonatomic) long long clickTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
