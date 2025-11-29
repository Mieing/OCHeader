@class NSString, UIImage, UIColor;

@interface IESECCommentEmptyPageConfig : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL withArrow;
@property (nonatomic) BOOL needJumpFunc;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *primaryButtonTitle;
@property (copy, nonatomic) UIColor *backGroundColor;
@property (nonatomic) long long style;
@property (nonatomic) double paddingTopOfWhiteCell;

- (void).cxx_destruct;

@end
