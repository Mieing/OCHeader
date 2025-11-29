@class NSString, UIImage;

@interface AWETeenGroupStyleActionSheetItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
