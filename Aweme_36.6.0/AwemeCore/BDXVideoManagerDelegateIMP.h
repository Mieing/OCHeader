@class NSString;

@interface BDXVideoManagerDelegateIMP : NSObject <BDXVideoManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)convertFromJSONDict:(id)a0;

@end
