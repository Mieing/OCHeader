@class BDByteCastPPStatusInfo;

@interface BDByteCastPPGetStatusInfoCmd : BDByteCastPPCmd

@property (retain, nonatomic) BDByteCastPPStatusInfo *statusInfo;

+ (id)cmd;

- (void).cxx_destruct;

@end
