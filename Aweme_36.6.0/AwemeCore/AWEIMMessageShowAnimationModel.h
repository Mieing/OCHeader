@class NSString, NSArray;

@interface AWEIMMessageShowAnimationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resource_id;
@property (copy, nonatomic) NSArray *resource_url;
@property (nonatomic) long long particle_num;
@property (copy, nonatomic) NSArray *particle_size;
@property (nonatomic) long long particle_pro_delay;
@property (copy, nonatomic) NSArray *particle_fall_x;
@property (copy, nonatomic) NSArray *particle_fall_y;
@property (copy, nonatomic) NSArray *particle_fall_curve;
@property (copy, nonatomic) NSArray *particle_fall_speed;
@property (copy, nonatomic) NSArray *particle_alpha;
@property (nonatomic) float particle_alpha_start;
@property (readonly, nonatomic) int particle_size_min;
@property (readonly, nonatomic) int particle_size_max;
@property (readonly, nonatomic) int particle_fall_x_left;
@property (readonly, nonatomic) int particle_fall_x_right;
@property (readonly, nonatomic) float particle_fall_y_top;
@property (readonly, nonatomic) float particle_fall_y_bottom;
@property (readonly, nonatomic) float particle_fall_curve_va;
@property (readonly, nonatomic) float particle_fall_curve_vb;
@property (readonly, nonatomic) float particle_fall_curve_vc;
@property (readonly, nonatomic) float particle_fall_curve_vd;
@property (readonly, nonatomic) int particle_fall_speed_min;
@property (readonly, nonatomic) int particle_fall_speed_max;
@property (readonly, nonatomic) float particle_opacity_begin;
@property (readonly, nonatomic) float particle_opacity_end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
