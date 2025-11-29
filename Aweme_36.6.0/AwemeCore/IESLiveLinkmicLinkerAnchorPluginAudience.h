@class NSString;
@protocol IESLiveLinkmicLinkerPluginProvider;

@interface IESLiveLinkmicLinkerAnchorPluginAudience : NSObject <IESLiveLinkmicLinkerPlugin>

@property (retain, nonatomic) id<IESLiveLinkmicLinkerPluginProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)linkerDidStart;
- (void)linkerDidStop;
- (void)linkerInteractListUpdated;
- (void)linkerUserPositionUpdated;
- (void)linkerUserBindToView;
- (void).cxx_destruct;

@end
