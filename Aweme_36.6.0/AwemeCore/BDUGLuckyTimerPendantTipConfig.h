@class NSArray, NSString;

@interface BDUGLuckyTimerPendantTipConfig : BDUGLuckyJSONModel

@property (nonatomic) BOOL tipEnable;
@property (copy, nonatomic) NSArray *bgColor;
@property (nonatomic) long long tipDuration;
@property (copy, nonatomic) NSString *tipSize;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;

@end
