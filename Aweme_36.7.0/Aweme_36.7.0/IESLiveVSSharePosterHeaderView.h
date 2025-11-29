@class HTSLiveUser, NSString, IESLiveImageView, UILabel;

@interface IESLiveVSSharePosterHeaderView : UIView <IESLiveVSSharePosterViewProtocol>

@property (retain, nonatomic) IESLiveImageView *avatatImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userIDLabel;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (copy, nonatomic) id /* block */ downLoadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarURLs;
- (void)startLoadSubviews;
- (void).cxx_destruct;
- (id)displayId;
- (id)initWithUserInfo:(id)a0;
- (id)nickName;
- (void)setupSubviews;

@end
