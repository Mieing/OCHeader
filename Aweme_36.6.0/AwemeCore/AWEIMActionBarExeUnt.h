@class NSString, NSNumber, NSArray;

@interface AWEIMActionBarExeUnt : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionBarKey;
@property (retain, nonatomic) NSNumber *exitDuration;
@property (copy, nonatomic) NSArray *exitSceneArray;
@property (copy, nonatomic) NSString *exitDimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)getSecondsExitDuration;
- (BOOL)isConversionDimension;
- (id)getConDimensionLocalExtKey;
- (void).cxx_destruct;
- (BOOL)isDataValid;

@end
