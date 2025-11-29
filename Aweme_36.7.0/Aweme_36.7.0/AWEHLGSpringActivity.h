@interface AWEHLGSpringActivity : NSObject

+ (void)injectActivityInfoToShareModelIfNeed:(id)a0 uniqueID:(id)a1;
+ (void)updateShareSpringTaskStatusIfNeedWithUniqueID:(id)a0 model:(id)a1 channel:(id)a2 groupID:(id)a3;
+ (id)tryToGetPublishModelForRedPacketWithExtra:(id)a0;

@end
