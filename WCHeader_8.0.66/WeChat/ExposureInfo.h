@class LayerInfo, NSString, BtnInfo, DrawLotteryInfo, FollowCardBDMchInfo, NSMutableArray;

@interface ExposureInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *singleExposureInfoList;
@property (nonatomic) unsigned int isQueryOthers;
@property (retain, nonatomic) NSString *drawLotteryParams;
@property (nonatomic) unsigned int isShowBtn;
@property (retain, nonatomic) BtnInfo *btnInfo;
@property (retain, nonatomic) NSString *exposureInfoModifyParams;
@property (nonatomic) unsigned int userOpertaionType;
@property (nonatomic) unsigned int isShowLayer;
@property (retain, nonatomic) LayerInfo *layerInfo;
@property (retain, nonatomic) NSString *backgroundImgWhole;
@property (retain, nonatomic) DrawLotteryInfo *drawLotteryInfo;
@property (retain, nonatomic) FollowCardBDMchInfo *followCardbdMchInfo;

+ (void)initialize;

@end
