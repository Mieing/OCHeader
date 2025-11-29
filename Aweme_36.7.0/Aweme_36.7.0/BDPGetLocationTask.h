@class BDPUniqueID;

@interface BDPGetLocationTask : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ getLocationCallback;

- (void).cxx_destruct;

@end
