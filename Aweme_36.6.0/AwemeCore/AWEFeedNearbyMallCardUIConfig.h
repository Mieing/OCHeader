@class UIColor, NSString, NSArray, UIImage;

@interface AWEFeedNearbyMallCardUIConfig : NSObject

@property (nonatomic) BOOL useEnhancedBG;
@property (nonatomic) BOOL hasMallHeaderImg;
@property (nonatomic) BOOL recommendEnhanced;
@property (copy, nonatomic) NSString *moreButtonText;
@property (retain, nonatomic) UIColor *moreButtonBGColor;
@property (retain, nonatomic) UIColor *moreButtonLabelColor;
@property (retain, nonatomic) UIImage *moreButtonArrowIcon;
@property (retain, nonatomic) UIImage *locationIcon;
@property (retain, nonatomic) UIImage *contentBGImg;
@property (copy, nonatomic) NSString *contentBGCDNPath;
@property (copy, nonatomic) NSString *contentBGCDNName;
@property (retain, nonatomic) UIImage *mallIconImg;
@property (retain, nonatomic) UIImage *mallTextImg;
@property (copy, nonatomic) NSArray *gradientBGColors;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
