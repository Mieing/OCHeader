@class IESECLivePriceElementModel, IESECLiveCountDownElementModel, IESECLiveCombinationBlockElementModel, IESECLiveLoopTextElementModel, IESECLiveImageElementModel, NSString, IESECLiveBlankElementModel, IESECLiveRichTextElementModel, NSNumber, IESECLiveImageURLModel, IESECLiveTextElementModel, IESECLiveAvatarsElementModel, IESECLiveConfigCountDownModel;

@interface IESECLiveConfigContentItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long elementType;
@property (retain, nonatomic) IESECLiveImageURLModel *avatars;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (retain, nonatomic) NSNumber *blankWidth;
@property (retain, nonatomic) IESECLiveImageURLModel *image;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDown;
@property (nonatomic) long long position;
@property (retain, nonatomic) IESECLiveTextElementModel *textElement;
@property (retain, nonatomic) IESECLiveBlankElementModel *blankElement;
@property (retain, nonatomic) IESECLiveCountDownElementModel *countDownElement;
@property (retain, nonatomic) IESECLiveAvatarsElementModel *avatarsElement;
@property (retain, nonatomic) IESECLiveImageElementModel *imageElement;
@property (retain, nonatomic) IESECLiveCombinationBlockElementModel *combinationBlockElement;
@property (retain, nonatomic) IESECLiveRichTextElementModel *richTextElement;
@property (retain, nonatomic) IESECLivePriceElementModel *priceElement;
@property (retain, nonatomic) IESECLiveLoopTextElementModel *loopTextElement;
@property (nonatomic) BOOL cartAddDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithContentElementData:(id)a0;
- (void).cxx_destruct;

@end
