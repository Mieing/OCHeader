@class UIColor, NSString, UIFont, UIImage;

@interface WCFinderLocationTerminatorViewParams : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) BOOL isIconImageUserInteractionEnabled;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL isTitleUserInteractionEnabled;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (nonatomic) BOOL isSubtitleUserInteractionEnabled;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
