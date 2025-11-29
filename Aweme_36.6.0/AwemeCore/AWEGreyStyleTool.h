@interface AWEGreyStyleTool : NSObject

+ (BOOL)greystyleEnable;
+ (BOOL)isTimeInvalid;
+ (BOOL)needGrayStyleWithClass:(Class)a0 andIndentifier:(id)a1;
+ (void)setGreyStyleInLayer:(id)a0 withIndentifier:(id)a1;
+ (void)setGreyStyeInLayer:(id)a0 withParamas:(id)a1;
+ (void)updateGreyModeConfig;
+ (void)setGreyStyleInViewController:(id)a0;
+ (void)setGreyStyleInView:(id)a0;
+ (void)resetGreyStyleInLayer:(id)a0 withIndentifier:(id)a1;

@end
