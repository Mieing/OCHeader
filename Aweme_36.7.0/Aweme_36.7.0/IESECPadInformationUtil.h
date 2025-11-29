@interface IESECPadInformationUtil : NSObject

@property (nonatomic) double mallContainerRealWidth;
@property (nonatomic) double mallContainerMarginLeft;
@property (nonatomic) double mallContainerMarginRight;
@property (nonatomic) double mallTopBarViewHeight;
@property (readonly, nonatomic) BOOL padNeedAdapt;

+ (id)sharedInstance;

- (void)calculateRealWidthForPad;
- (double)calculateRotiaForPad;
- (BOOL)padNeedPortraitScreen;
- (id)init;

@end
