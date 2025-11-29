@class NSString, NSNumber;

@interface ACCPitayaResultTrackModel : NSObject

@property (retain, nonatomic) NSString *businessScene;
@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) NSString *modelInput;
@property (retain, nonatomic) NSString *modelOutput;
@property (retain, nonatomic) NSNumber *modelDuration;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSNumber *errorCode;
@property (nonatomic) unsigned long long predictBehaviorType;

- (void).cxx_destruct;

@end
