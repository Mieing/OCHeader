@class NSString;

@interface ACCPOIInfoModel : NSObject <ACCPOIInfoModelProtocol>

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *distance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
