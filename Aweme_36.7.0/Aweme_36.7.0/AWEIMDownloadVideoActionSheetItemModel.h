@class NSString, UIImage;

@interface AWEIMDownloadVideoActionSheetItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
