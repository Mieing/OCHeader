@class NSString;

@interface BDPInviteAppModel_HG : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *shareImg;
@property (nonatomic) BOOL isNew;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
