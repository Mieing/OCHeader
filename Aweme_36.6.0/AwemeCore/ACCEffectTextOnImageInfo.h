@class NSString, NSDictionary, NSArray, IESEffectModel, ACCTextOnImageAlgoModel;

@interface ACCEffectTextOnImageInfo : NSObject

@property (retain, nonatomic) NSDictionary *info;
@property (retain, nonatomic) ACCTextOnImageAlgoModel *algoModel;
@property (readonly, nonatomic) BOOL isTextOnImageSticker;
@property (readonly, nonatomic) long long location;
@property (readonly, copy, nonatomic) NSString *textStickerEffectId;
@property (readonly, copy, nonatomic) NSArray *fontEffectIds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) IESEffectModel *textStickerEffectModel;
@property (retain, nonatomic) NSArray *fontModelArray;

- (id)initWithEffectExtra:(id)a0;
- (void).cxx_destruct;

@end
