@class NSArray, NSString;

@interface BDSCSearchDeviceTagContentConfig : NSObject <BDModelCustom>

@property (copy, nonatomic) NSArray *common;
@property (copy, nonatomic) NSArray *live;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
