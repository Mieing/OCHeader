@class NSString;

@interface AWEIMStrangerTransferAction : NSObject <AWEIMStrangerTransferActionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)gotoProfileViewControllerWithChatModel:(id)a0;
+ (void)gotoMessageListViewControllerWithChatModel:(id)a0 cellVM:(id)a1 tracker:(id)a2 strangerChatDataManager:(id)a3 rootViewController:(id)a4;


@end
