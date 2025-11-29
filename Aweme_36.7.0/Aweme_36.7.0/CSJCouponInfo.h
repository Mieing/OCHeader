@class NSString;

@interface CSJCouponInfo : NSObject <NSCoding>

@property (nonatomic) long long style_type;
@property (nonatomic) long long position;
@property (nonatomic) double image_scale_rate;
@property (copy, nonatomic) NSString *image_gif_url;
@property (nonatomic) double image_gif_aspect_ratio;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
