@class NSDictionary;

@interface BDRTextRunDelegate : NSObject

@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double width;

- (const struct __CTRunDelegate { } *)CTRunDelegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
