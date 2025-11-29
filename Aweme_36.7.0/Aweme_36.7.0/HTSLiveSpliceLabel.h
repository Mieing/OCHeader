@class NSString, HTSLiveImage;

@interface HTSLiveSpliceLabel : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (nonatomic) long long iconRaduis;
@property (nonatomic) long long textFrontSize;
@property (nonatomic) long long textFrontBold;
@property (nonatomic) long long textFrontItalic;

+ (id)descriptor;

- (long long)textFrontItalic;
- (long long)textFrontBold;
- (long long)textFrontSize;
- (long long)iconRaduis;
- (long long)iconHeight;
- (long long)iconWidth;
- (id)backgroundColor;
- (id)iconImage;
- (id)textColor;
- (id)text;
- (id)backgroundImage;
- (void)setText:(id)a0;
- (void)setTextColor:(id)a0;

@end
