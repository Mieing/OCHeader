@class NSString;

@interface WCFinderGlobalSnapshotHelper : NSObject <WCFinderPreviewView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)screenShotInfoWithContentVM:(id)a0 snapshotType:(unsigned long long)a1;
+ (id)screenShotInfoWithContact:(id)a0 isBrand:(BOOL)a1 snapshotType:(unsigned long long)a2;
+ (id)createURLWithPath:(id)a0 query:(id)a1;
+ (id)createMsgURLWithContentVM:(id)a0 snapshotType:(unsigned long long)a1;
+ (id)createMsgURLWithContact:(id)a0 isBrand:(BOOL)a1 snapshotType:(unsigned long long)a2;
+ (id)queryWithContentVM:(id)a0 snapshotType:(unsigned long long)a1;
+ (void)handleJumpWithParams:(id)a0 actionType:(id)a1 fromNav:(id)a2 entryScene:(unsigned long long)a3 cardType:(int)a4;
+ (BOOL)supportContentVM:(id)a0;

- (id)previewType;
- (void)reportForward:(id)a0 commentScene:(int)a1;

@end
