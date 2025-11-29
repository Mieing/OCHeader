@class UIImage, NSString, IESEffectModel;

@interface AWERecordPropEntranceViewState : NSObject <FPUIState>

@property (retain, nonatomic) UIImage *stickerSwitchImage;
@property (copy, nonatomic) NSString *stickerSwitchLabelText;
@property (copy, nonatomic) NSString *stickerSwitchButtonAccessibilityLabel;
@property (retain, nonatomic) IESEffectModel *entranceProp;
@property (nonatomic) double firstFrameStartTime;
@property (nonatomic) BOOL stickerSwitchButtonHidden;
@property (nonatomic) BOOL stickerSwitchLabelHidden;
@property (nonatomic) BOOL stickerSwitchButtonFadeHidden;
@property (nonatomic) BOOL stickerSwitchLabelFadeHidden;

- (void).cxx_destruct;

@end
