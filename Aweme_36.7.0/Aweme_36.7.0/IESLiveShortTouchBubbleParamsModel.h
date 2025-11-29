@class NSString, IESLiveShortTouchBubbleUIModel;

@interface IESLiveShortTouchBubbleParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleId;
@property (retain, nonatomic) IESLiveShortTouchBubbleUIModel *uiModel;
@property (nonatomic) long long strategy;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
