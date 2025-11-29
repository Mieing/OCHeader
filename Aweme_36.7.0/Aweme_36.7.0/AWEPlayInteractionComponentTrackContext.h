@class NSString;
@protocol AWEPlayInteractionComponentTrackPluginProtocol;

@interface AWEPlayInteractionComponentTrackContext : NSObject <AWEPlayInteractionComponentTrackContextProtocol>

@property (nonatomic) long long componentTrackId;
@property (weak, nonatomic) id infoIdentifier;
@property (weak, nonatomic) id<AWEPlayInteractionComponentTrackPluginProtocol> trackPlugin;
@property (nonatomic) long long trackMethodType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
