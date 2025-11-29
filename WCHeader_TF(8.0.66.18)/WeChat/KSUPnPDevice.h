@class NSString, NSDictionary, NSMutableDictionary, NSURL, NSArray;
@protocol KSUPnPDeviceStatusObserver;

@interface KSUPnPDevice : NSObject

@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<KSUPnPDeviceStatusObserver> statusObserver;
@property (copy, nonatomic) NSDictionary *discoverInfo;
@property (copy, nonatomic) NSDictionary *discoverInfoForParsing;
@property (retain, nonatomic) NSMutableDictionary *mutableUSNInfos;
@property (retain, nonatomic) NSURL *deviceDescriptionURL;
@property (copy, nonatomic) NSString *searchTarget;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSURL *manufacturerURL;
@property (copy, nonatomic) NSString *modelDescription;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSArray *serviceList;
@property (readonly, nonatomic) NSMutableDictionary *controllers;
@property (readonly, copy, nonatomic) NSDictionary *USNInfos;
@property (readonly, copy, nonatomic) NSString *instanceDescription;
@property (readonly, copy, nonatomic) NSString *propertiesDescription;

- (BOOL)parseDescriptionFromXMLData:(id)a0;
- (void)requestDeviceDescription;
- (void)handleDeviceDescriptionWithRecord:(id)a0 response:(id)a1 data:(id)a2;
- (void)handleSuccessForDeviceDescriptionWithRecord:(id)a0;
- (void)handleFailureForDeviceDescriptionWithRecord:(id)a0 error:(id)a1;
- (id)initWithUUID:(id)a0;
- (BOOL)_isValid;
- (void)_didInit;
- (id)initWithDiscoverInfo:(id)a0;
- (void)updateWithDiscoverInfo:(id)a0;
- (id)initWithDiscoverResponseData:(id)a0;
- (void)updateWithDiscoverResponseData:(id)a0;
- (BOOL)isPrimaryDiscoverInfoEqualToDevice:(id)a0;
- (id)serviceForType:(id)a0;
- (id)controllerForServiceType:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
