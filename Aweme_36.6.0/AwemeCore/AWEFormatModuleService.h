@class NSString;

@interface AWEFormatModuleService : HTSService <AWEFormatModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterFormatRoomWithFormatModel:(id)a0;
- (void)transferToProfileManagerWithEnterFrom:(id)a0 enterMethod:(id)a1 extra:(id)a2;
- (void)transferToProfileActive:(BOOL)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (BOOL)enterFormatInteractiveRoomWithModel:(id)a0;
- (id)formatInteractiveCommonTrackParams:(id)a0;
- (id)formatFeedEntryView;
- (id)trackService;
- (id)formatLiveInterface;
- (id)p_profileSchema:(id)a0 addQuery:(id)a1;

@end
