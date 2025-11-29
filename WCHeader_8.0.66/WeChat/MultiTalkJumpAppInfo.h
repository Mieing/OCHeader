@class MultiTalkJumpAppWordingInfo, NSString;

@interface MultiTalkJumpAppInfo : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) MultiTalkJumpAppWordingInfo *wordingInfo;
@property (retain, nonatomic) NSString *iconUrlString;
@property (retain, nonatomic) NSString *defaultIconName;
@property (retain, nonatomic) NSString *schemeUrlStringInDialog;
@property (retain, nonatomic) NSString *schemeUrlStringInBanner;
@property (retain, nonatomic) NSString *htmlUrlStringInDialog;
@property (retain, nonatomic) NSString *htmlUrlStringInBanner;

- (void).cxx_destruct;

@end
