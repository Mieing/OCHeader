@class NSString, NSArray, AWEECOMIMMemberShopInfoModel, YYTextLayout;
@protocol AWEECOMIMSubCardTrackProtocol;

@interface AWEECOMIMCardMemberInfoModel : NSObject <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardMemberInfoCardProtocol, AWEECOMIMCardComponentSingleIconLabelViewProtocol, AWEECOMIMCardComponentOperationPanelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *avatarString;
@property (copy, nonatomic) NSString *backImgUrl;
@property (copy, nonatomic) NSString *memberImgUrl;
@property (copy, nonatomic) NSString *levelImgUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *memberName;
@property (copy, nonatomic) NSString *memberSkipUrl;
@property (nonatomic) long long memberLevel;
@property (copy, nonatomic) NSArray *rightsArr;
@property (retain, nonatomic) AWEECOMIMMemberShopInfoModel *shopInfoModel;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSString *singleLineInfoDesc;
@property (retain, nonatomic) YYTextLayout *singleLineInfoTextLayout;
@property (weak, nonatomic) id<AWEECOMIMSubCardTrackProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messageBcmUnitParams;
- (void)trackSubCardTap:(id)a0 extraParams:(id)a1 unitBtmId:(id)a2 responder:(id)a3 needSetBcm:(BOOL)a4;
- (void)skipToUrl:(id)a0 andTrackSubcardTap:(id)a1 extraParams:(id)a2 unitBtmId:(id)a3 responder:(id)a4 needSetBcm:(BOOL)a5;
- (void)skipToUrl:(id)a0 andTrackSubCardTap:(id)a1 extraParams:(id)a2;
- (void)trackSubCardTapWithSubCardName:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
