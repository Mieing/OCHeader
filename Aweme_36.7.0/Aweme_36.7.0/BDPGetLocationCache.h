@class NSError, NSMutableArray, BDPGetLocationModel;

@interface BDPGetLocationCache : NSObject

@property (retain, nonatomic) NSMutableArray *getLocationTasks;
@property (retain, nonatomic) BDPGetLocationModel *lastLocaiton;
@property (retain, nonatomic) NSError *lastError;
@property (nonatomic) double lastTime;
@property (nonatomic) BOOL isRequesting;

- (void).cxx_destruct;
- (id)init;

@end
