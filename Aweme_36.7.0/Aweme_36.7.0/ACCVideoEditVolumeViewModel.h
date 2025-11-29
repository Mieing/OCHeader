@class RACSignal, NSString, RACSubject;

@interface ACCVideoEditVolumeViewModel : NSObject <ACCEditVolumeServiceProtocol>

@property (retain, nonatomic) RACSubject *checkMusicFeatureToastSubject;
@property (readonly, nonatomic) RACSignal *checkMusicFeatureToastSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendCheckMusicFeatureToastSignal;
- (void).cxx_destruct;
- (void)dealloc;

@end
