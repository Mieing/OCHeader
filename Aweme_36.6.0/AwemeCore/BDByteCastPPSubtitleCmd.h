@class BDByteCastPPSubtitleBean;

@interface BDByteCastPPSubtitleCmd : BDByteCastPPCmd

@property (retain, nonatomic) BDByteCastPPSubtitleBean *subtitle;

+ (id)cmd;

- (void).cxx_destruct;

@end
