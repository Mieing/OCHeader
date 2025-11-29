@class NSString;

@interface MMLiveGiftResourceDescriptor : NSObject

@property (retain, nonatomic) NSString *giftId;
@property (retain, nonatomic) NSString *resourceId;
@property (nonatomic) long long resourceType;

+ (id)descriptorForGiftId:(id)a0 resourceType:(long long)a1;
+ (id)descriptorForGiftId:(id)a0 resourceId:(id)a1 resourceType:(long long)a2;

- (void).cxx_destruct;

@end
