@class UIView, DUXBaseImageView, NSArray, AWERecordInspirationLoraSuiteKeyWordsLabel, DUXBaseLabel, AWEAwemeModel, UIButton, DUXButton;

@interface AWERecordInspirationLoraSuiteFeedBottomView : UIView

@property (retain, nonatomic) DUXBaseLabel *effectNameLabel;
@property (retain, nonatomic) DUXBaseLabel *effectUserCountLabel;
@property (retain, nonatomic) DUXBaseImageView *effectAuthorCoverImageView;
@property (retain, nonatomic) DUXBaseImageView *starEffectImageView;
@property (retain, nonatomic) DUXBaseLabel *effectAuthorNameLabel;
@property (retain, nonatomic) DUXButton *effectAuthorButton;
@property (retain, nonatomic) UIButton *modifyLoraButton;
@property (retain, nonatomic) AWERecordInspirationLoraSuiteKeyWordsLabel *keywordsLabel;
@property (nonatomic) double elementCommonBottomOffSet;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSArray *infoArray;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)p_setKeyWordsText:(id)a0 withType:(unsigned long long)a1;
- (BOOL)isAIFollowShootEffect:(id)a0;
- (id)initWithBottomOffSet:(double)a0;
- (BOOL)isStandardAuthorAccount:(id)a0;
- (void)effectAuthorButtonClicked:(id)a0;
- (unsigned long long)getCurrentUgcEffectType;
- (void)p_createKeyWordsString:(id)a0;
- (id)getCurrentEffectUgcPrompt;
- (void)onLoraModifyButtonClick;
- (void).cxx_destruct;
- (void)layout;

@end
