@class NSString, WCFinderLiveStarterReporter;

@interface MMFinderLiveStickerStarterReporter : NSObject <MMFinderLiveStickerReporting>

@property (retain, nonatomic) WCFinderLiveStarterReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
