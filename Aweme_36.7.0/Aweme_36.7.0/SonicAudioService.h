@class NSString;
@protocol SonicAudioCallback;

@interface SonicAudioService : NSObject <SonicAudioService> {
    id<SonicAudioCallback> audioCallback_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
