@class NSString, HTSLiveImage;

@interface PreviewPanelWidget : IESLivePBBaseMessage

@property (nonatomic) int id_p;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *displayText;

+ (id)descriptor;

@end
