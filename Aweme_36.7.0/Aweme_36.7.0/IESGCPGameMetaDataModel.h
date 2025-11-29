@class IESGCPGameMetaDataUserInfoModel, NSString, NSDictionary, IESGCPGameMetaDataGameAttributeModel, IESGCPGameMetaDataBizAttributeModel, IESGCPGameMetaDataComponentAttributeModel, IESGCPGameMetaDataLiveSceneAttributeModel;

@interface IESGCPGameMetaDataModel : NSObject

@property (readonly, copy, nonatomic) NSDictionary *gameInfoReportParams;
@property (readonly, nonatomic) int omniCooperationType;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) IESGCPGameMetaDataGameAttributeModel *gameAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataBizAttributeModel *bizAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataComponentAttributeModel *componentAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataLiveSceneAttributeModel *liveSceneAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataUserInfoModel *userInfoModel;
@property (copy, nonatomic) NSString *promoteInstanceID;

- (BOOL)trackerOptEnable;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
