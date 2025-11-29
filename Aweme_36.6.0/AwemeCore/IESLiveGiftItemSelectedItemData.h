@class NSString, HTSLiveImage;

@interface IESLiveGiftItemSelectedItemData : NSObject

@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (retain, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *baseInfoString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } giftCellFrame;
@property (retain, nonatomic) HTSLiveImage *defaultImage;
@property (retain, nonatomic) HTSLiveImage *giftIconAssetImg;

- (void).cxx_destruct;

@end
