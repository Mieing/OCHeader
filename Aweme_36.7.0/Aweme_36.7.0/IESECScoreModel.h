@class NSNumber, NSString;

@interface IESECScoreModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSString *rating;
@property (retain, nonatomic) NSNumber *percentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
