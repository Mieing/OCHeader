@class NSString, HTSLiveImage;

@interface IESLiveGiftAssemblyCustomizedIconModel : NSObject

@property (copy, nonatomic) NSString *baseInfoString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } giftCellFrame;
@property (retain, nonatomic) HTSLiveImage *image;
@property (retain, nonatomic) HTSLiveImage *defaultImage;
@property (nonatomic) long long pluginTotalPrice;

- (void).cxx_destruct;

@end
