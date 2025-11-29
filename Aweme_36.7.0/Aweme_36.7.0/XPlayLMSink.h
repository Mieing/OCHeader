@class NSString;

@interface XPlayLMSink : XPlaySink <LMVideoSinkDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame:(id)a0;

@end
