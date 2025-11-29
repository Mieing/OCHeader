@class IESECBackgroundDescribeInfo, IESECGoodsDetailReplayResponse, NSString, IESECImageModel, IESECTextElement;

@interface IESECGoodsDetailLiveReplayFloatEntryDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showStyle;
@property (nonatomic) long long entryInitState;
@property (nonatomic) long long entryInitPosition;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *entryBackground;
@property (retain, nonatomic) IESECImageModel *floatEntryIcon;
@property (retain, nonatomic) IESECTextElement *textElement;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *replayBG;
@property (retain, nonatomic) IESECImageModel *replayChangeAnimation;
@property (retain, nonatomic) IESECImageModel *textPrefixIcon;
@property (nonatomic) double playTime;
@property (retain, nonatomic) IESECGoodsDetailReplayResponse *replayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
