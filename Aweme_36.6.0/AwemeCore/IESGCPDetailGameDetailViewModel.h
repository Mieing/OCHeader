@class UIColor, NSArray, IESGCPPBGameDetailGameBasicInfoV2, NSString, IESGCPMediaCollectionViewCellModel, NSAttributedString;
@protocol IESGCPURLSchemaHandler;

@interface IESGCPDetailGameDetailViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailGameBasicInfoV2 *baseInfo;
@property (retain, nonatomic) NSArray *cellModelArray;
@property (nonatomic) BOOL isFold;
@property (readonly, copy, nonatomic) NSAttributedString *introAttributeString;
@property (retain, nonatomic) UIColor *fontColor;
@property (retain, nonatomic) UIColor *foldBtnColor;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) IESGCPMediaCollectionViewCellModel *mediaCollectionViewCellModel;
@property (readonly, nonatomic) NSArray *gameAwardsModels;
@property (readonly, nonatomic) id<IESGCPURLSchemaHandler> urlSchemaHandler;
@property (copy, nonatomic) NSString *launchTime;

- (id)tabTrackList;
- (id)playerDirection;
- (BOOL)shouldShowReserveGameLaunchTime;
- (void)setTextCommodPropertyWithAttrString:(id)a0;
- (BOOL)isLandscapeImage;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)setContent:(id)a0;
- (id)init;

@end
