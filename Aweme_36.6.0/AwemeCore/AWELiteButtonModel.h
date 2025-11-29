@class NSString, NSNumber;

@interface AWELiteButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rewardNum;
@property (retain, nonatomic) NSNumber *playTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
