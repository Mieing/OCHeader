@class NSString, HTSLiveImage;

@interface IESLiveInteractionConfirmPanelViewModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL isForCameraInvite;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long panelType;

- (id)userAvatarUrls;
- (void).cxx_destruct;
- (id)init;
- (void)setUserAction:(id /* block */)a0;

@end
