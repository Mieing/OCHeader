@interface IESLivePullStreamControlMessageUtils : NSObject

+ (BOOL)switchCDNOptimizeEnable;
+ (id)handleDisableTemplateMessage:(id)a0 pullStreamData:(id)a1;
+ (BOOL)shouldDisableSomeClarityWhenErrorOccured;

@end
