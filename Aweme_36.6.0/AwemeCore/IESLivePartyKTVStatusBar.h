@class IESLiveButton, UIImageView, HTSLiveChorusUserChangedContent, UILabel, UIView;

@interface IESLivePartyKTVStatusBar : UIView

@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *peopleNumberLabel;
@property (retain, nonatomic) UILabel *fontPeopleNumberLabel;
@property (retain, nonatomic) UILabel *peopleLabel;
@property (retain, nonatomic) UIImageView *arrowIV;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *numberContainer;
@property (retain, nonatomic) IESLiveButton *chorusListBtn;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) HTSLiveChorusUserChangedContent *chorusContent;
@property (copy, nonatomic) id /* block */ chorusListBtnClickedBlock;

- (void)updateStageColor:(id)a0;
- (void)updateChorusContent:(id)a0;
- (void)clearNumberOfPeople;
- (void)chorusListBtnClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)updatePreview:(BOOL)a0;

@end
