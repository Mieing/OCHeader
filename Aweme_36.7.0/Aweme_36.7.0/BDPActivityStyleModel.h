@class NSString;

@interface BDPActivityStyleModel : NSObject

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *bottomTitle;
@property (copy, nonatomic) NSString *schema;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
