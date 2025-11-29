@class BDPUniqueID;

@interface BDPGetLocationTask_HG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ getLocationCallback;

- (void).cxx_destruct;

@end
