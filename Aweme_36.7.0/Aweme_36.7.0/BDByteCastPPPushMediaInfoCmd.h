@class BDByteCastPPMediaInfo;

@interface BDByteCastPPPushMediaInfoCmd : BDByteCastPPCmd

@property (retain, nonatomic) BDByteCastPPMediaInfo *mediaInfo;

+ (id)cmd;

- (void).cxx_destruct;

@end
