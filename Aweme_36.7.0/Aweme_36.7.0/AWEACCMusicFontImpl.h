@class NSString;

@interface AWEACCMusicFontImpl : NSObject <ACCMusicFontProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)musicBigFontModeOn;
- (id)boldSystemFontOfSize:(double)a0;
- (id)systemFontOfSize:(double)a0 weight:(double)a1;
- (id)systemFontOfSize:(double)a0;
- (double)currentScale;

@end
