@class PoiDetailInfo;

@interface SnsPoiDetail : WXPBGeneratedMessage

@property (retain, nonatomic) PoiDetailInfo *poiDetailInfo;
@property (nonatomic) unsigned int sourceFlag;
@property (nonatomic) int idcredirect;
@property (nonatomic) unsigned int realTimeData;
@property (nonatomic) unsigned int scale;

+ (void)initialize;

- (id)mainAddressName;
- (id)detailAddressNameWithOnlyShowPoiName:(BOOL)a0 addressSubType:(int)a1;
- (id)categoryTipsString;
- (id)priceTipsString;
- (id)businessHourString;
- (id)removeNewline:(id)a0;
- (id)phoneString;
- (unsigned int)getScaleWithDefaultValueIfSvrNotFilled;
- (id)getDisplayAddressNameWithOnlyShowPoiName:(BOOL)a0;

@end
