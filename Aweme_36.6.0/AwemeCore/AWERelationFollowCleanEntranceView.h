@class NSString, UIImageView, AWERelationFollowCleanAvatarContainer, UILabel, UIView;

@interface AWERelationFollowCleanEntranceView : UIView <AWERelationFollowCleanEntranceProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *numLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) AWERelationFollowCleanAvatarContainer *avatorImageContainer;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)userIconWidth;
- (void)viewClick;
- (BOOL)isStylyA;
- (void)setStyleAConstraint;
- (void)setStyleBConstraint;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;
- (void)setupModel:(id)a0;
- (double)suggestedHeight;

@end
