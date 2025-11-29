@class NSString;

@interface AWEIMChatListDataControllerManager : NSObject <AWEIMChatListDataControllerManagerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)__chatListDataControllerForIdentify:(id)a0 couldNullable:(BOOL)a1;
+ (id)chatListDataControllerForIdentify:(id)a0;

- (id)createBaseChildDataControllers;

@end
