@class NSString;
@protocol AWEPlayInteractionComponentTrackPluginProtocol, AWEFeedTemplateAnchorBaseConfigProtocol;

@interface AWEPlayInteractionComponentTrackContext : NSObject <AWEPlayInteractionComponentTrackContextProtocol>

@property (nonatomic) long long componentTrackId;
@property (weak, nonatomic) id infoIdentifier;
@property (weak, nonatomic) id<AWEPlayInteractionComponentTrackPluginProtocol> trackPlugin;
@property (nonatomic) long long trackMethodType;
@property (weak, nonatomic) id<AWEFeedTemplateAnchorBaseConfigProtocol> bizAnchorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
