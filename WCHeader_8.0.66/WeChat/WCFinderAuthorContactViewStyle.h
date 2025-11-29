@class UIColor, UIFont;

@interface WCFinderAuthorContactViewStyle : NSObject

@property (nonatomic) double headIconSize;
@property (nonatomic) double authIconSize;
@property (nonatomic) double nickNameLeftMargin;
@property (retain, nonatomic) UIFont *nicknameFont;
@property (retain, nonatomic) UIColor *nicknameColor;
@property (nonatomic) BOOL showAuthProfessionLabel;

+ (id)defaultStyle;

- (void).cxx_destruct;

@end
