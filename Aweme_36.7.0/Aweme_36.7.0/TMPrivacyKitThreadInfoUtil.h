@class NSString;

@interface TMPrivacyKitThreadInfoUtil : NSObject <TMThreadInfoDelivery>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setInfo:(id)a0 withKey:(id)a1;
+ (id)sharedInstance;
+ (id)getInfo:(id)a0;
+ (void)removeInfo:(id)a0;


@end
