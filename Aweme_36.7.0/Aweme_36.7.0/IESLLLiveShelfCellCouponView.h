@class UIColor, UIFont, IESLLLiveShelfCellDashedLine, NSString, UILabel;

@interface IESLLLiveShelfCellCouponView : UIView

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UILabel *ticketTitleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLLLiveShelfCellDashedLine *line;
@property (copy, nonatomic) NSString *serviceTagText;

- (void)setTicketTitle:(id)a0 content:(id)a1;
- (id)initWithBorderColor:(id)a0 textColor:(id)a1 textFont:(id)a2;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (void)setupUI;
- (double)viewWidth;

@end
