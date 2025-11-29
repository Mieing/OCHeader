@class NSString;

@interface AWELuckyCatPendantCircleInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long playletAdTime;
@property (copy, nonatomic) NSString *playletAdToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
