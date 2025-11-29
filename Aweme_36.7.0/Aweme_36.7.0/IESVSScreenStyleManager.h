@class NSString;

@interface IESVSScreenStyleManager : NSObject <IESVSScreenStyleAction>

@property (nonatomic) unsigned long long screenStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (unsigned long long)closeBtnDidClick;
- (unsigned long long)updateToFullScreenOrientation:(long long)a0;
- (unsigned long long)updateToHalfScreenOrientation:(long long)a0;
- (unsigned long long)updateToScreenStyle:(unsigned long long)a0;
- (unsigned long long)updateToOrientation:(long long)a0;
- (unsigned long long)fullScreenBtnDidClick;
- (unsigned long long)currentScreenStyleType;
- (void)updateToFullScreen:(BOOL)a0;
- (void)resetScreenStyleType;
- (BOOL)isFullScreen;

@end
