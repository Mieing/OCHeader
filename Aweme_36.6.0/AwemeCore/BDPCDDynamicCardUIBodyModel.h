@class BDPCDDynamicCardUIPropsBackGroundModel, BDPCDDynamicCardUIPropsSecondaryInfoModel, BDPCDDynamicCardUIPropsExtraModel, BDPCDDynamicCardUIPropsRightConfigModel, BDPCDDynamicCardUIPropsPrimaryInfoModel;

@interface BDPCDDynamicCardUIBodyModel : BDPCDDynamicCardUIPropsModel

@property (retain, nonatomic) BDPCDDynamicCardUIPropsExtraModel *extra;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsPrimaryInfoModel *primaryInfo;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsSecondaryInfoModel *secondaryInfo;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsBackGroundModel *background;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsRightConfigModel *rightConfig;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) BOOL mask;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
