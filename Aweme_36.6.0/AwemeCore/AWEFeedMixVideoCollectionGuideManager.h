@class NSString;

@interface AWEFeedMixVideoCollectionGuideManager : NSObject <AWEFeedMixCollectionGuideManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordMixCollectionGuide;
- (void)cleanMixCollectionGuideAllRecording;
- (void)cleanFeedMixCollectionGuideExitRecording;
- (BOOL)isMixCollectionGuideSametDaySinceLastShow;
- (void)cleanMixCollectionGuideShowNum;

@end
