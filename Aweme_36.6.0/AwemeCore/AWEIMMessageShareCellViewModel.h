@class UIColor, NSString, NSDictionary, UIImage, NSURL, NSNumber, IESIMContactPickerRelationTagViewModel;
@protocol AWEIMShareModelProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMMessageShareCellViewModel : NSObject

@property (retain, nonatomic) id<AWEIMShareModelProtocol> model;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *geckoImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL useIconBackgroundView;
@property (retain, nonatomic) UIColor *iconBackgroundColor;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) unsigned long long shareState;
@property (nonatomic) unsigned long long shareType;
@property (nonatomic) BOOL enableDynamicTheme;
@property (nonatomic) BOOL activeStatusDisable;
@property (nonatomic) BOOL needHighlight;
@property (retain, nonatomic) NSURL *avatarURLLight;
@property (retain, nonatomic) NSURL *avatarURLDark;
@property (nonatomic) BOOL tracked;
@property (copy, nonatomic) NSString *shareTitleString;
@property (copy, nonatomic) NSString *sentTitleString;
@property (retain, nonatomic) NSNumber *iconViewContentModel;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) BOOL enableShowRedPacket;
@property (nonatomic) BOOL enableStickerOnTopGrayColor;
@property (nonatomic) unsigned long long tailStyle;
@property (copy, nonatomic) NSString *pitayaLightInteractionSource;
@property (nonatomic) BOOL isNotClickGroup;
@property (copy, nonatomic) NSString *extraShareText;
@property (copy, nonatomic) NSDictionary *extensionInfo;
@property (nonatomic) BOOL hasTrigerLoadMore;
@property (retain, nonatomic) IESIMContactPickerRelationTagViewModel *relationTagModel;
@property (nonatomic) BOOL isFirstScreen;

- (void).cxx_destruct;

@end
