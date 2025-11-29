@class NSDictionary, AWESharePanelPageContext;

@interface AWESharePanelBigFontAdapter : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *currentTypeValueDict;
@property (retain, nonatomic) NSDictionary *currentTypeTitleValueDict;
@property (retain, nonatomic) NSDictionary *threeRowNormalValue;
@property (retain, nonatomic) NSDictionary *threeRowMiddleValue;
@property (retain, nonatomic) NSDictionary *threeRowBigValue;
@property (retain, nonatomic) NSDictionary *twoRowNormalValue;
@property (retain, nonatomic) NSDictionary *twoRowMiddleValue;
@property (retain, nonatomic) NSDictionary *twoRowBigValue;
@property (weak, nonatomic) AWESharePanelPageContext *context;

+ (id)subtitleLayoutNormalValue;
+ (id)noSubtitleLayoutNormalValue;
+ (id)subtitleLayoutMiddleValue;
+ (id)noSubtitleLayoutMiddleValue;
+ (id)noSubtitleLayoutBigValue;
+ (id)subtitleLayoutBigValue;

- (double)valueInScene:(unsigned long long)a0;
- (id)initWithBigFontType:(unsigned long long)a0;
- (double)valueInTitleScene:(unsigned long long)a0 hasSubtitle:(BOOL)a1;
- (void).cxx_destruct;

@end
