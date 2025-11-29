@class UIStackView, IESLiveWaitingListUser, UIImageView, UILabel, NSNumber;

@interface IESLiveAudienceInteractiveFastMatchApplyCell : UITableViewCell

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ permitUserBlock;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *applyTimeLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userModel;
@property (retain, nonatomic) NSNumber *now;
@property (nonatomic) BOOL isInPaidLinkmic;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) BOOL showPayPrice;
@property (retain, nonatomic) UIStackView *tagContainer;
@property (nonatomic) BOOL enableShowGender;

+ (id)waitingDesString:(id)a0 nowTime:(id)a1;
+ (id)addPriceWaitingDesString:(id)a0 nowTime:(id)a1 useAddPriceText:(BOOL)a2;
+ (id)waitingDesString:(id)a0 nowTime:(id)a1 isInPaidLinkmic:(BOOL)a2;

- (void)removeAllTagViews;
- (void)updateWithModel:(id)a0 now:(id)a1 permitUserBlock:(id /* block */)a2 scene:(unsigned long long)a3 showPermit:(BOOL)a4 rank:(id)a5 sortStrategy:(long long)a6;
- (void)updateWithIsInPaidLinkmic:(BOOL)a0 isAddPrice:(BOOL)a1 showPayPrice:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutUI;

@end
