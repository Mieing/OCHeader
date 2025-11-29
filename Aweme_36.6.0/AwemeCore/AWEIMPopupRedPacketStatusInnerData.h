@class AWEIMPopupRedPacketStatusWindowData, AWEIMPopupRedPacketLottieModel, NSString;

@interface AWEIMPopupRedPacketStatusInnerData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long redPacketStatus;
@property (nonatomic) BOOL hitFrequencyControl;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusWindowData *windowData;
@property (nonatomic) BOOL isColdLaunchFreeRedPacket;
@property (retain, nonatomic) AWEIMPopupRedPacketLottieModel *coverLottieData;
@property (retain, nonatomic) AWEIMPopupRedPacketLottieModel *atmosphereLottieData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)windowDataJSONTransformer;
+ (id)coverLottieDataJSONTransformer;
+ (id)atmosphereLottieDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
