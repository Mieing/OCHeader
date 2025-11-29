@class UIColor, AWEChallengeDetailDescIconButton, AWEChallengeModel, NSString, UIView, YYLabel;
@protocol AWEChallengeDetailDescViewDelegate;

@interface AWEChallengeDetailDescView : UIView <AWEChallengeDetailDescViewProtocol>

@property (retain, nonatomic) AWEChallengeModel *model;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) AWEChallengeDetailDescIconButton *openBtn;
@property (retain, nonatomic) AWEChallengeDetailDescIconButton *closeBtn;
@property (nonatomic) BOOL descriptionShowMore;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) YYLabel *disclaimerLabel;
@property (nonatomic) BOOL hasDisclaimer;
@property (nonatomic) double descMaxLineNum;
@property (weak, nonatomic) id<AWEChallengeDetailDescViewDelegate> delegate;
@property (nonatomic) double infoHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeConstraints;
- (unsigned long long)directionForString:(id)a0;
- (void)updateMixDescBigFontStyleIfNeeded;
- (id)addLinkToText:(id)a0 font:(id)a1 color:(id)a2;
- (id)disclaimerTextWithModel:(id)a0;
- (void)addDescriptionShowMoreTruncation:(unsigned long long)a0;
- (void)remakeConstraintsHasDisclaimer:(BOOL)a0;
- (BOOL)needFixLineHeight;
- (void)didTapShowMore;
- (void)didTapClose;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;

@end
