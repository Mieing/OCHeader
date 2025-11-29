@class NSString, MMContext;

@interface CaraAppleUserContext : NSObject <CaraUserContextBase>

@property (retain, nonatomic) MMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
