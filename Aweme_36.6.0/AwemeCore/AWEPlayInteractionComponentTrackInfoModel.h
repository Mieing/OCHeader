@class NSMutableSet;
@protocol AWEPlayInteractionComponentTrackPluginProtocol, AWEFeedTemplateAnchorBaseConfigProtocol;

@interface AWEPlayInteractionComponentTrackInfoModel : NSObject

@property (nonatomic) long long componentTrackId;
@property (weak, nonatomic) id infoIdentifier;
@property (weak, nonatomic) id<AWEPlayInteractionComponentTrackPluginProtocol> trackPlugin;
@property (nonatomic) long long trackMethodType;
@property (nonatomic) double enterTimeStamp;
@property (weak, nonatomic) id<AWEFeedTemplateAnchorBaseConfigProtocol> bizAnchorConfig;
@property (retain, nonatomic) NSMutableSet *responsibleTrackMethodTypes;

- (id)logInfoForAnchorTrackInfoModel;
- (id)logInfoForCommonTrackInfoModel;
- (void).cxx_destruct;

@end
