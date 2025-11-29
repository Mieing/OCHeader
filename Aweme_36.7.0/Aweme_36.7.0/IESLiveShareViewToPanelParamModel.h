@class NSString, IESLiveShareViewToPanelGameInfoModel, NSNumber;

@interface IESLiveShareViewToPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *viewId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *qrCodeScheme;
@property (retain, nonatomic) IESLiveShareViewToPanelGameInfoModel *gameInfo;
@property (copy, nonatomic) NSString *qrShareScene;
@property (retain, nonatomic) NSNumber *posterActivityVideoType;
@property (copy, nonatomic) NSString *publishMusicId;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *unmodifiablePublishParams;
@property (copy, nonatomic) NSString *saveViewId;
@property (copy, nonatomic) NSString *schemaParams;
@property (copy, nonatomic) NSString *logParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
