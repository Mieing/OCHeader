@class NSString;

@interface BDSCSceneInfo : NSObject

@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) BOOL dayMode;
@property (nonatomic) BOOL isInLVScene;
@property (copy, nonatomic) NSString *sceneId;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (id)init;

@end
