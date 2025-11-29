@class NSString;

@interface AWELiveModelForwardingService : HTSService <AWELiveModelForwardingServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (BOOL)isAudioThemeEnableForPreview;
- (id)ieslive_roomModelWithJsonDict:(id)a0;

@end
