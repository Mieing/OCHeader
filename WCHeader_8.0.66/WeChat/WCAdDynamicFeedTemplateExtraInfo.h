@interface WCAdDynamicFeedTemplateExtraInfo : NSObject <NSCoding>

@property (nonatomic) BOOL hasEndCover;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
