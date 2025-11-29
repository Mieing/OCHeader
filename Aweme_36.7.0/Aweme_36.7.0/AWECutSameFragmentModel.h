@class NSNumber, NSString;

@interface AWECutSameFragmentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCartoon;
@property (copy, nonatomic) NSNumber *videoWidth;
@property (copy, nonatomic) NSNumber *videoHeight;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) long long cartoonType;
@property (readonly, nonatomic) unsigned long long realCartoonType;
@property (copy, nonatomic) NSString *gameplayAlgorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
