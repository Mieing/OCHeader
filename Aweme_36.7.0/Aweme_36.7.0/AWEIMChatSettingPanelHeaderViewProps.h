@class UIImage, NSAttributedString;

@interface AWEIMChatSettingPanelHeaderViewProps : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double textAreaWidth;
@property (copy, nonatomic) NSAttributedString *titleAttrText;
@property (copy, nonatomic) NSAttributedString *subtitleAttrText;
@property (nonatomic) double imageToTopMargin;
@property (nonatomic) double titleToImageMargin;
@property (nonatomic) double subtitleToTitleMargin;
@property (nonatomic) double bottomToSubtitleMargin;

- (void).cxx_destruct;

@end
