@class AWEPlayInteractionDescriptionElementConfig, AWEPlayInteractionDescriptionContext, AWEAwemeModel;

@interface AWEPlayInteractionDescriptionParsersManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementConfig *elementConfig;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;

+ (id)createSimplyDescriptionExtraModelsWithDescriptionInfoModel:(id)a0;
+ (id)createTextHighlightWithDescExtraModel:(id)a0 parserContext:(id)a1 inTruncationToken:(BOOL)a2;

- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forString:(id)a1;
- (id)updateTextExtrasRange:(id)a0 originDescriptionString:(id)a1 newDescriptionString:(id)a2;
- (void)parserDescription;
- (void)updateTextExtrasRangeIfNeed;
- (void)parserDescriptionExtraModels;
- (void)updateDescriptionExtraModelsBeforeParser;
- (void)setExtraModelAttribute:(id)a0 attributedString:(id)a1;
- (void)updateParagraphStyleIfNeededWithAttributedString:(id)a0;
- (void)updateDescriptionExtraModelsAfterParser;
- (void).cxx_destruct;

@end
