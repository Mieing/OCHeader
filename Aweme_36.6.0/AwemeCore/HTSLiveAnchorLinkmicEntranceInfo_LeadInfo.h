@class NSString, HTSLiveImage;

@interface HTSLiveAnchorLinkmicEntranceInfo_LeadInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *leadImage;
@property (nonatomic) BOOL hasLeadImage;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) int bubblePanel;

+ (id)descriptor;

@end
