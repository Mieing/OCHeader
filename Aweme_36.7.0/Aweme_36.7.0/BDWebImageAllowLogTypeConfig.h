@class NSString;

@interface BDWebImageAllowLogTypeConfig : NSObject <BDModelCustom>

@property (nonatomic) double monitorRate;
@property (nonatomic) double errorMonitorRate;
@property (nonatomic) double largeSizeRate;
@property (nonatomic) double sensibleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
