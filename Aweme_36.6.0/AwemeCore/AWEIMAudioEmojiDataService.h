@class NSString;

@interface AWEIMAudioEmojiDataService : HTSService <AWEIMAudioEmojiDataService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanExpiredFiles;
- (void)cleanAllFiles;
- (void)setup;

@end
