@class NSString;

@interface AWEPadDanmakuServiceImpl : NSObject <AWEPadDanmakuService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)padDanmakuStandardSpeed;
- (BOOL)shouldShowPadDanmakuEntry;
- (id)padDanmakuEntryView;

@end
