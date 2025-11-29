@class IESGCPPBGameImageBundler, NSString, NSArray, IESGCPPBGameDetailReserveGameSimpleInfoV2, IESGCPDetailReserveGameInfoThemeConfig;

@interface IESGCPDetailReserveGameInfoViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailReserveGameSimpleInfoV2 *info;
@property (retain, nonatomic) IESGCPDetailReserveGameInfoThemeConfig *themeConfig;
@property (readonly, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSArray *tagsArray;

- (void)openSchema:(id)a0;
- (id)getTrackerEncodedString;
- (BOOL)noticeTextCouldDoJumpAction;
- (id)noticeArrowIconName;
- (void)userDidTapDescriptionText;
- (id)descriptionJumpSchema;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)noticeText;

@end
