@class NSString;

@interface CaraAppleContactFeatureCenter : NSObject <CaraNativeContactFeatureCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getContactByUsername:(id)a0;
- (void)dealloc;

@end
