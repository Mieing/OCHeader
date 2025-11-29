@class BDARVSourceModel, BDARewardedVideoAdBaseController, NSString;

@interface BDARVInSiteAdvertisingNetwork : NSObject <BDARInSiteAdvertisingProtocol>

@property (retain, nonatomic) BDARewardedVideoAdBaseController *controller;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
