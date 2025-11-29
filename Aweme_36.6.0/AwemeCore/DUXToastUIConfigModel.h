@class NSString;

@interface DUXToastUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long fixEnlargeMode;
@property (nonatomic) double fontSize;
@property (nonatomic) double stateIconSize;
@property (nonatomic) double maxWidth;
@property (nonatomic) double circleIconSize;
@property (nonatomic) double dualBallIconSize;
@property (nonatomic) double closeIconSize;
@property (nonatomic) double arrowIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end
