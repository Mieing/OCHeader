@class TPPlayerBaseMediaParams, TPPlayerConfigParams, TPPlayerDrmParams, TPPlayerGeneralTrackingParams;

@interface TPGeneralPlayFlowParams : NSObject

@property (retain, nonatomic) TPPlayerConfigParams *playerConfigParams;
@property (retain, nonatomic) TPPlayerBaseMediaParams *playerBaseMediaParams;
@property (retain, nonatomic) TPPlayerDrmParams *playerDrmParams;
@property (retain, nonatomic) TPPlayerGeneralTrackingParams *playerGeneralTrackingParams;

- (id)init;
- (void).cxx_destruct;

@end
