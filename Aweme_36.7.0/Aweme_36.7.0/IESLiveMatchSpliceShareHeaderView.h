@class NSArray, NSString, IESLiveImageView, UILabel;

@interface IESLiveMatchSpliceShareHeaderView : UIView <IESLiveVSSharePosterViewProtocol>

@property (retain, nonatomic) IESLiveImageView *avatatImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userIDLabel;
@property (retain, nonatomic) IESLiveImageView *matchFlagImageView;
@property (retain, nonatomic) IESLiveImageView *dividingLineImageView;
@property (retain, nonatomic) IESLiveImageView *appLogoImageView;
@property (retain, nonatomic) NSArray *raceLogoURLList;
@property (copy, nonatomic) id /* block */ downLoadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarURLs;
+ (id)avatarURI;
+ (id)bizPosterParams;
+ (id)displayId;
+ (id)nickName;

- (void)startLoadSubviews;
- (void)startLoadSubviewsForUser;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
