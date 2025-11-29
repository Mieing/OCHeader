@class IESLiveButton, NSMutableArray, UIImageView, UILabel, IESLiveGradientView, UIView;

@interface IESLiveKTVChorusRankListView : UIView

@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *starView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *scoreTipLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveGradientView *leftLine;
@property (retain, nonatomic) IESLiveGradientView *rightLine;
@property (retain, nonatomic) UIView *rankBGView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *peopleLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *arrowIV;
@property (retain, nonatomic) IESLiveButton *rankButton;
@property (retain, nonatomic) NSMutableArray *guestLists;
@property (copy, nonatomic) id /* block */ rankListBtnClickedBlock;

- (void)updateScore:(id)a0;
- (void)updateRank:(int)a0 numberOfPeople:(int)a1;
- (void)updateUserList:(id)a0;
- (double)calcLabelWidth:(id)a0;
- (void)rankListBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateTitle:(id)a0;

@end
