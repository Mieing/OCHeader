@class UIImage, NSString;

@interface AWETeenUmbrellaPopoverSheetItem : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (void).cxx_destruct;

@end
