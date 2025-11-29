@class NSString;

@interface AWEStudioMusicBeatTemplateUtilServiceImpl : NSObject <AWEStudioMusicBeatTemplateUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMusicBeatTemplateProcessWithTemplateID:(id)a0 awemeModel:(id)a1 extraInfo:(id)a2;
- (void)preloadMusicBeatTemplateWithID:(id)a0 awemeModel:(id)a1;

@end
