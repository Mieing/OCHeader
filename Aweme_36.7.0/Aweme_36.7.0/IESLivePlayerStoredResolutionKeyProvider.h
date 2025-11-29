@class NSString;

@interface IESLivePlayerStoredResolutionKeyProvider : NSObject <IESLivePlayerStoredResolutionKeyProvider>

@property (nonatomic) long long storedResolutionScene;
@property (nonatomic) BOOL isVSRoom;
@property (nonatomic) BOOL isVRRoom;
@property (nonatomic) BOOL isGameRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVSRoom:(BOOL)a0 vrRoom:(BOOL)a1 gameRoom:(BOOL)a2;
- (id)storedResolutionLevelStorageKey;
- (BOOL)_storedGameResolutionEnable;
- (id)storedDefaultResolutionSDKLevelStorageKey;
- (id)storedResolutionSDKKeyStorageKey;
- (id)storedDefaultResolutionSDKKeyStorageKey;
- (id)storedResolutionStorageTimeKey;

@end
