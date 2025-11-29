@class UIButton, ContactTagData, NSString, UIView, MMUILabel;

@interface WCMomentsContactTagSearchCell : WCMomentsContactTagBaseCell

@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *memberCountLabel;
@property (retain, nonatomic) ContactTagData *tagData;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) MMUILabel *memberLabel;
@property (retain, nonatomic) UIButton *rightDetailBtn;

+ (id)cellIdentifier;

- (void)updateWithTagData:(id)a0 query:(id)a1 dicSearchMatchTip:(id)a2 clickedDetail:(id /* block */)a3;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)initNameLabel;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)initMemberLabel;
- (void)initRightDetailBtn;
- (void)layoutSubviews;
- (void)updateNameLabelText;
- (void).cxx_destruct;

@end
