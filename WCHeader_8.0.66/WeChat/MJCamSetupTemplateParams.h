@class NSMutableArray;
@protocol WCMJCameraMusicPlayableData;

@interface MJCamSetupTemplateParams : NSObject

@property (nonatomic) unsigned long long cameraPosition;
@property (nonatomic) long long ostSoundOn;
@property (retain, nonatomic) NSMutableArray *musicIds;
@property (retain, nonatomic) id<WCMJCameraMusicPlayableData> musicData;

- (id)init;
- (BOOL)isOstSoundNotSet;
- (void).cxx_destruct;

@end
