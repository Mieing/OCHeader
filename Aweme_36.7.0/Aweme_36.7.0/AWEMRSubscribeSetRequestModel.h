@class NSString, NSNumber, NSArray;

@interface AWEMRSubscribeSetRequestModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *serviceAccountId;
@property (copy, nonatomic) NSNumber *serviceAccountSubscribeStatus;
@property (copy, nonatomic) NSNumber *disturbStatus;
@property (copy, nonatomic) NSArray *subcategorySubscribeInfos;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
