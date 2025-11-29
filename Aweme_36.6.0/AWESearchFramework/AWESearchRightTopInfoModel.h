@class UIImage, NSString, NSDictionary;

@interface AWESearchRightTopInfoModel : NSObject

@property (retain, nonatomic) UIImage *localIcon;
@property (copy, nonatomic) NSString *iconString;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
