@class NSString, NSHashTable;

@interface ACCTCETrimAdjustEditService : NSObject <ACCTCETrimAdjustEditServiceProtocol>

@property (retain, nonatomic) NSHashTable *listenerArray;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentClipStartTime;
@property (nonatomic) BOOL isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyAdjustClipRangeEditCanelButtonAction;
- (void)notifyAdjustClipRangeEditApplyButtonAction;
- (void)notifyAdjustClipRangeEditorDismiss;
- (void)notifyAdjustClipRangeEditorShow;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)clearListener;

@end
