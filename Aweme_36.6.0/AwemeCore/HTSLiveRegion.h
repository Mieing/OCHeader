@class NSString;

@interface HTSLiveRegion : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *city;

+ (id)descriptor;

@end
