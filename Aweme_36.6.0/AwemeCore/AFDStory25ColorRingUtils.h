@class NSDictionary;

@interface AFDStory25ColorRingUtils : NSObject

@property (retain, nonatomic) NSDictionary *sceneMapping;

+ (id)sharedInstance;

- (void)setupSceneMapping;
- (id)getMappingForScene:(id)a0;
- (id)getRelationParamsWithConfig:(id)a0;
- (id)getTrackingCommonParams:(id)a0;
- (id)getStoryFeedTransitionCommonParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
