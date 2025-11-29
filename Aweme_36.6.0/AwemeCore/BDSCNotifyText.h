@class NSArray;

@interface BDSCNotifyText : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long network;
@property (copy, nonatomic) NSArray *tips;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
