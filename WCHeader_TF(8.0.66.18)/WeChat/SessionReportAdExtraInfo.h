@class AdvertReportDetailForWxa, NSString, ChannelsExtraData, ExtClickComm;

@interface SessionReportAdExtraInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int adW;
@property (nonatomic) unsigned int adH;
@property (retain, nonatomic) AdvertReportDetailForWxa *wxaReportDetail;
@property (retain, nonatomic) ExtClickComm *extClickComm;
@property (retain, nonatomic) ChannelsExtraData *channelsExtraDataPos;
@property (nonatomic) BOOL cardShowFlag;
@property (nonatomic) unsigned int cardDelaySec;
@property (nonatomic) BOOL cardExpandFlag;
@property (nonatomic) unsigned int cardExpandSec;
@property (nonatomic) BOOL hitLandpagePreload;
@property (nonatomic) unsigned int landpagePreloadSec;
@property (retain, nonatomic) NSString *playSequence;

+ (void)initialize;

- (void)setPlaySequence:(id)a0;
- (id)playSequence;
- (void)setLandpagePreloadSec:(unsigned int)a0;
- (unsigned int)landpagePreloadSec;
- (void)setHitLandpagePreload:(BOOL)a0;
- (BOOL)hitLandpagePreload;
- (void)setCardExpandSec:(unsigned int)a0;
- (unsigned int)cardExpandSec;
- (void)setCardExpandFlag:(BOOL)a0;
- (BOOL)cardExpandFlag;
- (void)setCardDelaySec:(unsigned int)a0;
- (unsigned int)cardDelaySec;
- (void)setCardShowFlag:(BOOL)a0;
- (BOOL)cardShowFlag;
- (void)setChannelsExtraDataPos:(id)a0;
- (id)channelsExtraDataPos;
- (void)setExtClickComm:(id)a0;
- (id)extClickComm;
- (void)setWxaReportDetail:(id)a0;
- (id)wxaReportDetail;
- (void)setAdH:(unsigned int)a0;
- (unsigned int)adH;
- (void)setAdW:(unsigned int)a0;
- (unsigned int)adW;

@end
