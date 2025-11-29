@class IESECTextElement, NSString, IESECTextStyle;

@interface IESECGoodsDetailActivityTimeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double preStartTime;
@property (nonatomic) double serverTime;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) double restBeginTime;
@property (nonatomic) double restEndTime;
@property (nonatomic) double intervalTime;
@property (retain, nonatomic) IESECTextElement *activityDesc;
@property (copy, nonatomic) NSString *textBgColor;
@property (retain, nonatomic) IESECTextStyle *textStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
