@class NSArray, NSString;
@protocol BDSimPlayerImpl, BDSimPlayModel, BDSimPlayerLogEvent, IESVideoPlayerProtocol, BDSimVideoBSModel;

@interface BDSimPlayerSuperResAgent : NSObject <BDSimSuperResInput>

@property (weak, nonatomic) id<BDSimPlayerImpl> player;
@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id<BDSimPlayModel> model;
@property (readonly, nonatomic) NSArray *playURLs;
@property (weak, nonatomic) id<BDSimPlayerLogEvent> logEvent;
@property (nonatomic) BOOL enableHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDebugVideoPlayQualityStr;
- (id)getDebugVideoPlayEndStr;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;

@end
