@class AWEPOIDetailFeedUgcRateLabelConfig, UIView, NSAttributedString, YYLabel;
@protocol AWEPOIDetailFeedUgcRateLabelDelegate;

@interface AWEPOIDetailFeedUgcRateLabel : UIView

@property (retain, nonatomic) AWEPOIDetailFeedUgcRateLabelConfig *config;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *expandTruncationView;
@property (retain, nonatomic) NSAttributedString *expandToken;
@property (retain, nonatomic) NSAttributedString *collapseToken;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcRateLabelDelegate> delegate;

+ (void)emoticonForAttributedString:(id)a0 font:(id)a1;
+ (id)calculateContentHeightWithModel:(id)a0 config:(id)a1;

- (void)updateWithConfig:(id)a0 string:(id)a1 hasExpandTruncation:(BOOL)a2 didExpand:(BOOL)a3;
- (void)didClickContentTextArea;
- (void)setupExpandTruncationView;
- (void)didClickExpandToken;
- (void)didClickCollapseToken;
- (void)updateWithString:(id)a0 expandedStatus:(unsigned long long)a1 didExpand:(BOOL)a2;
- (void)updateGradientTokenWithExpandStatus:(BOOL)a0 content:(id)a1;
- (void)updateTruncationTokenWithExpandStatus:(unsigned long long)a0 didExpand:(BOOL)a1 content:(id)a2;
- (void)refreshCollapseTokenWithTruncationText:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)attributedText;
- (void)setupUI;

@end
