@class NSString;

@interface AWEIMCommonItemExitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *dimension;
@property (copy, nonatomic) NSString *exitScope;
@property (nonatomic) long long threshold;
@property (nonatomic) double exitDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (BOOL)isConversionDimension;
- (double)getExitSeconds;
- (BOOL)scopeIsBtnExit;
- (BOOL)scopeIsConfigExit;
- (BOOL)isUserDimension;
- (BOOL)isDeviceDimension;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDataValid;

@end
