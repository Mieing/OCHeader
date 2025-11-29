@class NSString;

@interface HTSLiveGiftPanelTopBar : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int topbarAction;

+ (id)descriptor;

@end
