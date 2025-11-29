@class NSString, UIColor, FinderWindowProductInfo_ShowBoxItem;

@interface MMFinderLiveTextShowBoxItem : NSObject

@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL useJumpStyle;
@property (retain, nonatomic) FinderWindowProductInfo_ShowBoxItem *jumpForItem;

- (void).cxx_destruct;

@end
