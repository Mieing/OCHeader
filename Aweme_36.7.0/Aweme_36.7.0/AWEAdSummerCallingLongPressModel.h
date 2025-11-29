@class NSString;

@interface AWEAdSummerCallingLongPressModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *guideTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
