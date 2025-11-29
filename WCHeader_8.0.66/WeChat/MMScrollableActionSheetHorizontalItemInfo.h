@class UIImage, NSString, MMScrollableActionSheetHorizontalItemView;

@interface MMScrollableActionSheetHorizontalItemInfo : MMObject

@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *cornerImage;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) MMScrollableActionSheetHorizontalItemView *itemView;

- (void).cxx_destruct;

@end
