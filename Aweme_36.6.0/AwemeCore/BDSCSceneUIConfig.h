@class NSArray;

@interface BDSCSceneUIConfig : NSObject

@property (copy, nonatomic) NSArray *webCommonParamsKey;
@property (copy, nonatomic) NSArray *leboLogExtraParamsKey;
@property (nonatomic) double activeTimeInBackground;
@property (copy, nonatomic) NSArray *bdlinkBusinessExtraParamsKey;
@property (copy, nonatomic) NSArray *notifyTexts;
@property (copy, nonatomic) NSArray *deviceStrategies;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)notifyTextWithResult:(unsigned long long)a0 network:(unsigned long long)a1;
- (void).cxx_destruct;

@end
