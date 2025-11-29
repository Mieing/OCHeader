@class NSString;

@interface AWEIMCoreInjectService : NSObject <AWEIMCoreInjectService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)appendMsgSceneParamWithCid:(id)a0 params:(id)a1 event:(id)a2;
- (id)appendGroupFlagData:(id)a0 iescon:(id)a1;
- (id)serviceChatTrackersWithToUser:(id)a0 conversationID:(id)a1;
- (double)updateDateHighPerformance:(id)a0;
- (double)updateDate:(id)a0;
- (id)notUserGeneratedMessageTypes;

@end
