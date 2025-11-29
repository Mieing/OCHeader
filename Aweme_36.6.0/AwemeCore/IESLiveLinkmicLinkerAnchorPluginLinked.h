@class NSString;
@protocol IESLiveLinkmicLinkerPluginProvider;

@interface IESLiveLinkmicLinkerAnchorPluginLinked : NSObject <IESLiveLinkmicLinkerPlugin>

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
- (id)sortedInteractSession;
- (void).cxx_destruct;

@end
