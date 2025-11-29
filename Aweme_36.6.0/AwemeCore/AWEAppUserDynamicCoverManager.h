@class NSString;

@interface AWEAppUserDynamicCoverManager : HTSService <AWEAppUserDynamicCoverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicCoverConsumerSettingHasModifyKey;
+ (void)initDynamicCoverSettingIfNeed;


@end
