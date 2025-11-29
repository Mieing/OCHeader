@class AWESimpleInfoView, UIImageView, NSString, AWEUserProfileEventCommonParamsHandler, AWEUserModel;

@interface AWEStarActivityEntranceView : UIView <AWEStarActivityEntranceViewProtocol>

@property (retain, nonatomic) AWESimpleInfoView *billboardRankView;
@property (retain, nonatomic) AWESimpleInfoView *hitRankView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *tagID;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)updateEnterFrom:(id)a0;
- (void)updateTagID:(id)a0;
- (void)updateHitRankAvatarBorderColor:(id)a0;
- (void)clickBillboardRank;
- (void)clickHitRank;
- (id)defaultSettingsValue;
- (void)transferToHandledSchemaUsingSchema:(id)a0;
- (void)clickWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
