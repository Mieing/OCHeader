@class UIButton, ContactTagData, UIImageView, NSString, UIView, MMUILabel;

@interface WCMomentsContactTagSearchSelectCell : WCMomentsContactTagBaseCell

@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *leftCheckMark;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *memberCountLabel;
@property (retain, nonatomic) ContactTagData *tagData;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long checkType;
@property (retain, nonatomic) MMUILabel *memberLabel;
@property (retain, nonatomic) UIButton *rightDetailBtn;

+ (id)cellIdentifier;

- (void)updateWithTagData:(id)a0 checkType:(unsigned long long)a1 query:(id)a2 dicSearchMatchTip:(id)a3 clickedDetail:(id /* block */)a4;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initNameLabel;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)initMemberLabel;
- (void)initRightDetailBtn;
- (void)layoutSubviews;
- (void)updateWithCheckType:(unsigned long long)a0;
- (void)updateNameLabelText;
- (void).cxx_destruct;

@end
