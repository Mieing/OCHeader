@class NSString;

@interface AWEStudioHeimdallrServiceImpl : NSObject <ACCHeimdallrProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMemoryUseExceeded;
- (unsigned long long)folderSizeAtPath:(id)a0;

@end
