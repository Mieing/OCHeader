@class NSString;

@interface WCAdDynamicFeedConfigInfo : NSObject <NSCoding>

@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *templateId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
