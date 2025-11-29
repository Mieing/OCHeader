@class NSArray, NSDictionary, AWECaptionNLEModelDataModel, NSString, AWECaptionFollowShotAlgoModel, IESEffectModel;

@interface AWEEffectCaptionFollowShotInfo : NSObject

@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) id /* block */ filePathBlock;
@property (retain, nonatomic) AWECaptionFollowShotAlgoModel *algoModel;
@property (retain, nonatomic) AWECaptionNLEModelDataModel *nleModelData;
@property (retain, nonatomic) NSArray *captions;
@property (readonly, nonatomic) BOOL isEffectCaptionSticker;
@property (readonly, copy, nonatomic) NSString *musicID;
@property (readonly, nonatomic) double roundTime;
@property (readonly, copy, nonatomic) NSString *templateEffectId;
@property (readonly, copy, nonatomic) NSString *fontEffectId;
@property (readonly, copy, nonatomic) NSString *textColor;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchor;
@property (readonly, nonatomic) long long createdBy;
@property (retain, nonatomic) IESEffectModel *templateEffectModel;
@property (retain, nonatomic) IESEffectModel *fontEffectModel;

- (id)initWithEffectExtra:(id)a0 filePathBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
