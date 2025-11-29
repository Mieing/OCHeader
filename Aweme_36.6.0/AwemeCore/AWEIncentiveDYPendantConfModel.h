@class AWEIncentiveDYPendantCenterPictureData, NSString, AWEIncentiveDYPendantBubbleData, AWEIncentiveDYSlideshowPicData, NSDictionary, AWEIncentiveDYPendantCapsuleData;

@interface AWEIncentiveDYPendantConfModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long animationType;
@property (retain, nonatomic) AWEIncentiveDYPendantCenterPictureData *centerPicture;
@property (retain, nonatomic) AWEIncentiveDYSlideshowPicData *slideshowPic;
@property (retain, nonatomic) AWEIncentiveDYPendantBubbleData *bubbleData;
@property (retain, nonatomic) AWEIncentiveDYPendantCapsuleData *capsuleData;
@property (copy, nonatomic) NSString *pendantSchema;
@property (copy, nonatomic) NSDictionary *logExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
