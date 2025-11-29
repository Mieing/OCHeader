@class NSString;

@interface AWEIMPopupRedPacketLottieModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lottieURL;
@property (copy, nonatomic) NSString *fallbackImgURL;
@property (copy, nonatomic) NSString *jsonName;
@property (copy, nonatomic) NSString *channelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
