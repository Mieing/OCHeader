@class NSString;

@interface MMFinderLiveStickerAnchorLogReporter : NSObject <MMFinderLiveStickerReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportStickerAction:(unsigned long long)a0 type:(unsigned long long)a1;
- (void)reportStickerAction:(unsigned long long)a0 type:(unsigned long long)a1 attributes:(id)a2;

@end
