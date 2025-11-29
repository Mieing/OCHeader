@class NSString;

@interface LSIMPushConfigModel : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long shopMarketPushStatus;
@property (nonatomic) unsigned long long allMarketPushStatus;
@property (nonatomic) unsigned long long shopServicePushStatus;
@property (nonatomic) unsigned long long allServicePushStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
