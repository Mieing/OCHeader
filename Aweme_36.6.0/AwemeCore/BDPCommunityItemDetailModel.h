@class NSString;

@interface BDPCommunityItemDetailModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *icon;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
