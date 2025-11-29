@class NSArray, NSString, NSNumber;

@interface IESLiveTogetherSlotMethodParamModel : IESLiveBridgeModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *slotInfo;
@property (copy, nonatomic) NSString *togetherId;
@property (retain, nonatomic) NSNumber *currentCount;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
