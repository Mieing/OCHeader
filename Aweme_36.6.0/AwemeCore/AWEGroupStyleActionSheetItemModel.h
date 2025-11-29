@class NSString, UIImage;

@interface AWEGroupStyleActionSheetItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL showRightArrow;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
