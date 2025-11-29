@class NSString;

@interface AWEMRSubscribeSetSubcategoryInfoModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *subcategoryId;
@property (copy, nonatomic) NSString *subcategoryName;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long subscribeStatus;
@property (readonly, nonatomic) BOOL isSubscribed;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
