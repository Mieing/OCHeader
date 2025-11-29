@class BDByteCastPPStatusInfo;

@interface BDByteCastPPPushStatusInfoCmd : BDByteCastPPCmd

@property (retain, nonatomic) BDByteCastPPStatusInfo *statusInfo;

+ (id)cmd;

- (void).cxx_destruct;

@end
