@class UIColor, NSString, LinkWeAppJumpWrap;

@interface LinkStyle : TextStyle

@property (retain, nonatomic) UIColor *oHighlightedColor;
@property (nonatomic) unsigned long long jumpType;
@property (retain, nonatomic) LinkWeAppJumpWrap *weappJumpWrap;
@property (retain, nonatomic) NSString *nsUrl;
@property (retain, nonatomic) NSString *nsSourceUrl;
@property (nonatomic) unsigned long long eDataDectorType;
@property (nonatomic) BOOL bDrawsUnderLine;
@property (nonatomic) BOOL bBackgroundEnabled;

- (id)init;
- (BOOL)isSelectable;
- (BOOL)hasSameLinkTargetWith:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;

@end
