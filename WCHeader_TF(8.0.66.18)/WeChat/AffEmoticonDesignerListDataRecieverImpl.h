@class NSString;

@interface AffEmoticonDesignerListDataRecieverImpl : NSObject <EmoticonDesignerListDataRecieverBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onGotTotalEmoticonCount:(id)a0 emoticonCount:(int)a1 emojiCount:(int)a2;
- (void)onFirstFetchFinished:(id)a0;
- (void)onFirstFetchFailed:(id)a0;
- (void)onFetchEmoticonFinishedFor:(id)a0 dataType:(int)a1 hasMore:(BOOL)a2;
- (void)onFetchEmoticonDataFailedFor:(id)a0 dataType:(int)a1;

@end
