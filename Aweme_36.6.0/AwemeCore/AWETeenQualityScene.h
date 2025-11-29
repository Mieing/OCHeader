@class NSString, NSDictionary, NSMutableArray, AWETeenQualityDescription;

@interface AWETeenQualityScene : NSObject

@property (retain, nonatomic) NSMutableArray *pauseTimes;
@property (retain, nonatomic) NSDictionary *sectionDict;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (retain, nonatomic) AWETeenQualityDescription *descriptionData;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isStartScene;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)logParams;
- (void)endSectionWithName:(id)a0;
- (void)addPauseTimes:(id)a0;
- (void)startSection:(id)a0;
- (id)sceneKey;
- (void).cxx_destruct;
- (id)merge:(id)a0;

@end
