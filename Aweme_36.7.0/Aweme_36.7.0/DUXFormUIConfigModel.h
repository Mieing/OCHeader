@class NSString;

@interface DUXFormUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double inputFontSize;
@property (nonatomic) double topTitleFontSize;
@property (nonatomic) double leftTitleFontSize;
@property (nonatomic) double tipFontSize;
@property (nonatomic) double countFontSize;
@property (nonatomic) double linkIconSize;
@property (nonatomic) double closeIconSize;
@property (copy, nonatomic) id /* block */ sizeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;
- (double)scaleSizeWithOrigin:(double)a0;
- (void).cxx_destruct;

@end
