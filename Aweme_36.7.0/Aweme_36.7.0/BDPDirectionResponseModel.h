@class NSString, BDPRouteModel;

@interface BDPDirectionResponseModel : NSObject

@property (copy, nonatomic) NSString *status;
@property (nonatomic) double roure;
@property (nonatomic) double count;
@property (retain, nonatomic) BDPRouteModel *route;

- (void).cxx_destruct;

@end
