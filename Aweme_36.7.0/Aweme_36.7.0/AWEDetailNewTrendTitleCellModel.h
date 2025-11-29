@class UIFont, NSString, NSArray, UIImage;

@interface AWEDetailNewTrendTitleCellModel : NSObject

@property (nonatomic) BOOL isSkeletonModeStatus;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *tagIcon;
@property (retain, nonatomic) NSArray *tagColors;
@property (copy, nonatomic) NSArray *tagIconUrls;
@property (copy, nonatomic) NSArray *rightTagIconUrls;
@property (copy, nonatomic) NSString *tagTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *bottomBackgroundColors;
@property (retain, nonatomic) UIFont *tagTitleFont;
@property (copy, nonatomic) id /* block */ didSelectTagActionBlock;

- (void).cxx_destruct;

@end
