@class NSString, CMessageWrap;

@interface CExtendInfoOfLocation : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>

@property (nonatomic) double m_latitude;
@property (nonatomic) double m_longitude;
@property (nonatomic) double m_mapScale;
@property (retain, nonatomic) NSString *m_locationLabel;
@property (retain, nonatomic) NSString *m_poiName;
@property (retain, nonatomic) NSString *m_mapType;
@property (retain, nonatomic) NSString *m_infoUrl;
@property (retain, nonatomic) NSString *m_cityName;
@property (nonatomic) unsigned int m_adCode;
@property (retain, nonatomic) NSString *m_poiId;
@property (retain, nonatomic) NSString *m_buildingId;
@property (retain, nonatomic) NSString *m_floorName;
@property (retain, nonatomic) NSString *m_poiCategoryTips;
@property (retain, nonatomic) NSString *m_poiBusinessHour;
@property (retain, nonatomic) NSString *m_poiPhone;
@property (retain, nonatomic) NSString *m_poiPriceTips;
@property (nonatomic) BOOL m_isFromPoiList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithType:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)a0;
- (id)GetDisplaySessionContent;
- (id)messageFTSText;
- (id)msgReferSummaryAndReplace:(BOOL)a0;
- (id)genReferIconWithName:(id)a0 useCustomBkg:(BOOL)a1;
- (void).cxx_destruct;

@end
