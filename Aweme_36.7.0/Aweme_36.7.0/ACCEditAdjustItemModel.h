@class NSNumber, IESEffectModel, ACCFilterResourceModel;

@interface ACCEditAdjustItemModel : NSObject

@property (retain, nonatomic) NSNumber *bidirectional;
@property (retain, nonatomic) NSNumber *defaultIntensityNum;
@property (retain, nonatomic) IESEffectModel *effect;
@property (nonatomic) BOOL isClear;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) double intensity;
@property (nonatomic) double defaultIntensity;
@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) BOOL isBidirectional;
@property (retain, nonatomic) ACCFilterResourceModel *resourceModel;
@property (nonatomic) long long downloadStatus;
@property (copy, nonatomic) id /* block */ downloadStatusBlk;

- (void).cxx_destruct;

@end
