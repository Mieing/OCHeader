@class NSString;

@interface BDXSplitScreen : NSObject <BDXSplitScreenProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (double)fetchScreenAvailableHeight;
- (BOOL)isSplitScreenMode;
- (double)fetchScreenAvailableWidth;
- (double)getScreenAvailableWidth;
- (double)getScreenAvailableHeight;

@end
