@class YYLabel, AWESearchVideoKeySegmentModel, AWEAwemeModel;

@interface AWESearchVideoCardBottomTextView : UIView

@property (retain, nonatomic) YYLabel *keyPhraseDescriptionView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWESearchVideoKeySegmentModel *keySegmentModel;
@property (copy, nonatomic) id /* block */ clipTimestampBlock;

+ (id)attributedStringWithModel:(id)a0;

- (void)clickTimestamp;
- (void)p_configKeyPhraseView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
