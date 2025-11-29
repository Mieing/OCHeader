@class NSString;

@interface IESECShopShareInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long animationStyle;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) long long bubbleDismissTime;
@property (nonatomic) long long bubbleMaxShowTimes;
@property (nonatomic) long long QRCodeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
