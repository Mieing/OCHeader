@interface GCNotifcationBarConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } leftImgSize;
@property (nonatomic) struct CGSize { double width; double height; } rightImgSize;
@property (nonatomic) BOOL isRightImgClose;

@end
