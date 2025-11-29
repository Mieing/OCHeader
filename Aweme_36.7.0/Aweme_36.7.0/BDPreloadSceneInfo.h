@class NSString;

@interface BDPreloadSceneInfo : NSObject

@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long flowTrafficSize;
@property (nonatomic) long long wifiTrafficSize;

- (void).cxx_destruct;

@end
