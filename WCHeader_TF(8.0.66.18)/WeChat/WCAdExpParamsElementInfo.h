@class NSString;

@interface WCAdExpParamsElementInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *expId;
@property (retain, nonatomic) NSString *expValue;
@property (nonatomic) BOOL report;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
