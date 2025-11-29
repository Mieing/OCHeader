@class NSString, NSError, NSMutableDictionary;

@interface AWETeenQualityMessage : NSObject

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *subScene;
@property (retain, nonatomic) NSString *identify;
@property (nonatomic) long long requestType;
@property (nonatomic) long long playerLaunchType;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long duration;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (retain, nonatomic) NSMutableDictionary *stages;

- (void).cxx_destruct;

@end
