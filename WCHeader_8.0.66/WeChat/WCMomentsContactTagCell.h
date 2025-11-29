@class MMUILabel, ContactTagData, UIImageView, UIView, UIButton;

@interface WCMomentsContactTagCell : WCMomentsContactTagBaseCell

@property (retain, nonatomic) UIImageView *leftCheckMark;
@property (retain, nonatomic) UIButton *rightDetailBtn;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *memberLabel;
@property (retain, nonatomic) MMUILabel *memberCountLabel;
@property (retain, nonatomic) ContactTagData *tagData;

+ (id)cellIdentifier;

- (void)updateContactTag:(id)a0 checked:(BOOL)a1 clickedDetail:(id /* block */)a2;
- (void)updateCheckState:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initNameLabel;
- (void)initMemberLabel;
- (void)initRightDetailBtn;
- (void)initMemberCountLabel;
- (void)initSeperatorLine;
- (void)layoutSubviews;
- (unsigned long long)getMemberLableCountWithTagData:(id)a0;
- (void).cxx_destruct;

@end
