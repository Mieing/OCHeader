@class NSString;

@interface AWEACCIMServiceImpl : NSObject <ACCIMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)couldShowPolymericMessagesNotification;
- (BOOL)isEnterFromFlyBird:(id)a0;
- (id)editLayoutManagerWithRepository:(id)a0 serviceProvider:(id)a1;

@end
