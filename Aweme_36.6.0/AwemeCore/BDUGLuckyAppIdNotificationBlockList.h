@class NSString, NSArray;

@interface BDUGLuckyAppIdNotificationBlockList : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *popupBlockList;
@property (copy, nonatomic) NSArray *letterBlockList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
