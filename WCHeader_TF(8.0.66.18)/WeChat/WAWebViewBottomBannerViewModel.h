@class UIFont, NSString, NSArray, UIImage, WAContact;

@interface WAWebViewBottomBannerViewModel : MMObject

@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) NSString *iconURLString;
@property (retain, nonatomic) NSString *mmHeadImageUsername;
@property (nonatomic) BOOL roundImage;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long numberOfLinesForTitle;
@property (retain, nonatomic) NSArray *buttonsViewModel;
@property (nonatomic) double avatorTopSpacing;
@property (nonatomic) double avatorLeftSpacing;
@property (nonatomic) double buttonRightSpacing;
@property (nonatomic) double avatorWidth;
@property (nonatomic) double elementLeftOrRightSpacing;
@property (nonatomic) double labelTopOrBottomSpacing;
@property (nonatomic) double labelLeftSpacing;
@property (nonatomic) double labelRightSpacing;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) NSString *titleTail;
@property (nonatomic) BOOL originalGame;
@property (retain, nonatomic) WAContact *contact;

- (id)init;
- (double)calculateHeightWithWidth:(double)a0;
- (void).cxx_destruct;

@end
