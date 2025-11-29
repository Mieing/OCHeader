@class NSString, NSNumber, NSArray;

@interface IESLiveCaptureAssemblyGiftInfo : NSObject

@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSNumber *giftId;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } giftCellFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } giftToolbarFrame;
@property (copy, nonatomic) NSArray *pluginList;

- (void).cxx_destruct;

@end
