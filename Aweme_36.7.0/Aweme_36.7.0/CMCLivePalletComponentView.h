@class NSArray, UIImageView, NSString, UILabel;

@interface CMCLivePalletComponentView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *middleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *giftIconView;
@property (retain, nonatomic) UIImageView *bottomGiftIconView;
@property (retain, nonatomic) UILabel *leftBottomLabel;
@property (retain, nonatomic) UILabel *rightBottomLabel;
@property (nonatomic) unsigned long long componentStyle;
@property (nonatomic) long long increaseTimes;
@property (copy, nonatomic) NSArray *commentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDescLabel:(id)a0;
- (id)initWithComponentKey:(unsigned long long)a0;
- (void)updateRankInfoWithLiveData:(id)a0;
- (void)buildCommentInfo:(id)a0;
- (void)updateCommentInfoWithLiveData:(id)a0;
- (void)updateViewerAndFansViewWithLiveData:(id)a0;
- (id)showText:(long long)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
