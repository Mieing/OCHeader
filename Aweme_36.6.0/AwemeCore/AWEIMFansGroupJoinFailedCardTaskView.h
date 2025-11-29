@class NSString, UIImageView, NSDictionary, UILabel, UIButton;
@protocol AWEIMFansGroupJoinFailedCardDelegate;

@interface AWEIMFansGroupJoinFailedCardTaskView : UIView

@property (retain, nonatomic) NSString *task;
@property (nonatomic) BOOL metRequirement;
@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) UILabel *taskLabel;
@property (retain, nonatomic) UIButton *followBtn;
@property (nonatomic) BOOL isOnlyFollowLimit;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) id<AWEIMFansGroupJoinFailedCardDelegate> delegate;
@property (copy, nonatomic) NSString *jumpSchema;

- (void)__followBtnClicked;
- (BOOL)__enableShowButtonWithEntryLimitType:(unsigned long long)a0;
- (void)__changeFollowBtnWithStatus:(long long)a0;
- (void)__changeJoinMemeberBtnWithHasJoin:(BOOL)a0;
- (BOOL)__updateCommonJumpButtonWithExtraLimitInfo:(id)a0;
- (id)initWithTask:(id)a0 status:(BOOL)a1 entryLimitExt:(id)a2;
- (void)changeFollowBtnWithStatus:(long long)a0;
- (void)changeToSatisfied;
- (void).cxx_destruct;

@end
