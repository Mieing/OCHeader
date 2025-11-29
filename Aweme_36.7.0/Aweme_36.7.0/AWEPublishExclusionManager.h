@class NSString;

@interface AWEPublishExclusionManager : NSObject <AWEPublishExclusionManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_keyWithUserID:(id)a0;
+ (void)updatePublishExclusionList:(id)a0 secUidList:(id)a1;
+ (id)lastPublishExclusionList;
+ (id)lastPublishSecUidList;
+ (long long)limitCount;


@end
