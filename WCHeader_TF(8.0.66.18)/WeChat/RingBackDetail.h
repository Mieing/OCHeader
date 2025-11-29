@class NSString, MusicRingBackDetail, FinderRingBackDetail, VibrationInfo, RingBackListenInfo;

@interface RingBackDetail : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MusicRingBackDetail *musicRingBackDetail;
@property (retain, nonatomic) FinderRingBackDetail *finderRingBackDetail;
@property (nonatomic) int ret;
@property (nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) VibrationInfo *vibrationInfo;
@property (retain, nonatomic) RingBackListenInfo *ringBackListenInfo;

+ (void)initialize;

@end
