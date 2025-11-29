@class UIFont, NSString, NSArray, UIImage, NSAttributedString, AWEShareCellImItemModel, AWEShareCellTitleItemModel, AWEShareCellVerticalItemModel, UIColor;
@protocol AWEShareCell, AWEShareChannel;

@interface AWEShareCellItemModel : NSObject <AWEShareCellItem>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) id /* block */ longpressCallBack;
@property (copy, nonatomic) id /* block */ willAppearCallback;
@property (retain, nonatomic) UIImage *placeholder;
@property (copy, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (copy, nonatomic) NSString *shareType;
@property (nonatomic) double iconTitlePadding;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } smallIconSize;
@property (retain, nonatomic) UIImage *smallImage;
@property (retain, nonatomic) UIImage *bottomCenterImage;
@property (nonatomic) double titleLabelHeight;
@property (nonatomic) double iconTopPadding;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *iconImageViewBgColor;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) double iconCornerRadius;
@property (nonatomic) unsigned long long selectType;
@property (retain, nonatomic) UIFont *descFont;
@property (retain, nonatomic) UIColor *descColor;
@property (retain, nonatomic) NSString *descTitle;
@property (retain, nonatomic) NSAttributedString *descAttributedTitle;
@property (copy, nonatomic) NSArray *descStackViewArray;
@property (copy, nonatomic) NSString *subTitleString;
@property (nonatomic) double doubleAvatarSingleWidth;
@property (nonatomic) double doubleAvatarOuterWidth;
@property (nonatomic) double itemScale;
@property (nonatomic) double itemSpace;
@property (weak, nonatomic) id<AWEShareCell> cell;
@property (retain, nonatomic) id<AWEShareChannel> channel;
@property (retain, nonatomic) AWEShareCellImItemModel *imItem;
@property (retain, nonatomic) AWEShareCellVerticalItemModel *verticalItem;
@property (retain, nonatomic) AWEShareCellTitleItemModel *titleItem;
@property (nonatomic) BOOL userInteractionDisable;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isFirstScreenShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convinenceChannelsAndActionsFromTask:(id)a0;
+ (void)configSingleCellStyle:(id)a0;
+ (id)assembleItemModelWithShareItems:(id)a0 task:(id)a1;
+ (id)convinenceChannelsFromTask:(id)a0;
+ (id)convinenceActionFromTask:(id)a0;
+ (id)convinenceIMListFromContactList:(id)a0;
+ (id)sortShareTypeInComment:(id)a0;
+ (id)convinenceTitleItemFromTask:(id)a0;
+ (id)updateDownloadItemPositionWithItems:(id)a0 task:(id)a1;

- (void).cxx_destruct;

@end
