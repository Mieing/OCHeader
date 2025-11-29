@class NSString, UIColor;

@interface IESLiveUGCVideoPreviewConfig : NSObject

@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonBgColor;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (copy, nonatomic) id /* block */ buttonClickedAction;
@property (copy, nonatomic) id /* block */ didTapPreviewContainer;
@property (nonatomic) BOOL needHideAfterButtonClicked;

- (void).cxx_destruct;

@end
