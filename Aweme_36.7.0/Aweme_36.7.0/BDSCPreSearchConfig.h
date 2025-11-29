@class NSArray, NSString;

@interface BDSCPreSearchConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
