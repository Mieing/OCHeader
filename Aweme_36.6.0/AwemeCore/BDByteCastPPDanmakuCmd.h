@class BDByteCastPPDanmakuBean;

@interface BDByteCastPPDanmakuCmd : BDByteCastPPCmd

@property (retain, nonatomic) BDByteCastPPDanmakuBean *danmaku;

+ (id)cmd;

- (void).cxx_destruct;

@end
