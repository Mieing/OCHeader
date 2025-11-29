@class NSArray, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementAutoSizeInfo : NSObject <NSCoding>

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSArray *properties;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *minSize;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *sizeStep;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *maxSize;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *maxSizeiOS;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (void).cxx_destruct;

@end
