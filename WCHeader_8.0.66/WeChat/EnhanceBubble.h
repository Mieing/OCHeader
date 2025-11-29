@class NSString, FinderColor;

@interface EnhanceBubble : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) FinderColor *wordingColor;
@property (retain, nonatomic) NSString *clickWording;
@property (retain, nonatomic) FinderColor *clickWordingColor;
@property (retain, nonatomic) FinderColor *bgColor;

+ (void)initialize;

@end
