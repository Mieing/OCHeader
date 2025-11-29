@protocol AWEPlayInteractionComponentTrackPluginProtocol;

@interface AWEPlayInteractionComponentTrackInfoModel : NSObject

@property (nonatomic) long long componentTrackId;
@property (weak, nonatomic) id infoIdentifier;
@property (weak, nonatomic) id<AWEPlayInteractionComponentTrackPluginProtocol> trackPlugin;
@property (nonatomic) long long trackMethodType;
@property (nonatomic) double enterTimeStamp;

- (id)logInfoForCommonTrackInfoModel;
- (void).cxx_destruct;

@end
