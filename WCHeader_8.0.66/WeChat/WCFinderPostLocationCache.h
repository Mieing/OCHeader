@class CLLocation, FinderLbsListStreamRequest;

@interface WCFinderPostLocationCache : NSObject

@property (nonatomic) BOOL selectPOIFromAssetSwitch;
@property (retain, nonatomic) FinderLbsListStreamRequest *materialLbsLocation;
@property (retain, nonatomic) FinderLbsListStreamRequest *lbsLocation;
@property (retain, nonatomic) CLLocation *lastUpdateLocation;

- (id)generateJsonInfo;
- (void).cxx_destruct;

@end
