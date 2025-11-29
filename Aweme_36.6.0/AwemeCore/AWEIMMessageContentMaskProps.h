@class AWEIMImageTrackerConfig, NSString, NSArray, UIImage, AWEIMMessage;
@protocol AWEIMImageProtocol;

@interface AWEIMMessageContentMaskProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIImage *mosaicImage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSArray *urlArray;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) id<AWEIMImageProtocol> cachedPlaceholderKeyProvider;
@property (nonatomic) double roundCornerRatio;
@property (retain, nonatomic) AWEIMImageTrackerConfig *trackerConfig;
@property (copy, nonatomic) NSString *iconBackgroundName;
@property (nonatomic) BOOL showDefaultPlayIcon;
@property (nonatomic) double iconWidthHeight;
@property (nonatomic) double iconAndTitleSpacing;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) double imageRadius;
@property (nonatomic) BOOL needFold;
@property (nonatomic) BOOL iconBackgroundImageViewHidden;
@property (nonatomic) BOOL iconImageViewHidden;
@property (nonatomic) BOOL titleLabelHidden;
@property (nonatomic) BOOL subtitleLabelHidden;
@property (nonatomic) BOOL defaultPlayIconHidden;
@property (nonatomic) BOOL checkDiff;

- (void).cxx_destruct;

@end
