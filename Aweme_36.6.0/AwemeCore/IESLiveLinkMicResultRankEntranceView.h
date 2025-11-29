@class NSArray, UIImageView, IESLiveLinkMicAudienceUserInfoInLinkmic;

@interface IESLiveLinkMicResultRankEntranceView : UIView

@property (retain, nonatomic) IESLiveLinkMicAudienceUserInfoInLinkmic *info;
@property (retain, nonatomic) NSArray *avatarArray;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)setupView;

@end
