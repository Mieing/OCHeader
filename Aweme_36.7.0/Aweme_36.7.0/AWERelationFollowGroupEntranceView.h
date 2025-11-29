@class NSString, UIImageView, UILabel, UIView;

@interface AWERelationFollowGroupEntranceView : UIView <AWEFollowRelationGroupMessage, AWERelationFollowGroupEntranceProtocol>

@property (retain, nonatomic) UIView *contentBgView;
@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) long long groupCount;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishCreateGroup:(id)a0 groupName:(id)a1;
- (void)didFinishDeleteGroup:(id)a0;
- (void)setupGroupCount:(long long)a0;
- (double)userIconWidth;
- (void)viewClick;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setupView;
- (double)suggestedHeight;

@end
