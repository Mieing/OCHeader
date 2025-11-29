@class NSString;

@interface AWECommercePushDispatcher : NSObject <HTSService, AWECommercePushHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleCompanyMessage:(id)a0;
+ (void)handleOrderMessage:(id)a0;
+ (void)handleCommercePushMessage:(id)a0;


@end
