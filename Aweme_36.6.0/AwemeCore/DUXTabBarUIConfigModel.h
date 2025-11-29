@class NSString;

@interface DUXTabBarUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (nonatomic) double textIconSize;
@property (nonatomic) double normalIconSize;
@property (copy, nonatomic) id /* block */ textIconSizeProvider;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;
- (double)textIconSize:(double)a0;
- (void).cxx_destruct;

@end
