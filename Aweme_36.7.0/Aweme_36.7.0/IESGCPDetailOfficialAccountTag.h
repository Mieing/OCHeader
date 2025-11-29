@class UIColor, NSString, UIImageView, IESGCPPBGameDetailOfficialAccount, UILabel;

@interface IESGCPDetailOfficialAccountTag : UIControl <IESGCPTagViewProtocol>

@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *accountInfo;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *accountRightArrow;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (nonatomic) double fontSize;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountInfo:(id)a0 clickHandler:(id /* block */)a1;
- (void)updateWithAccountInfo:(id)a0;
- (void)didClickAccountTag;
- (void)tagStyleParamsDidUpdate;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)setupViews;

@end
