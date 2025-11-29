@class HTSLiveImage, HTSLiveButtonImage;

@interface HTSLivePanelConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) HTSLiveButtonImage *closeButton;
@property (nonatomic) BOOL hasCloseButton;

+ (id)descriptor;

@end
