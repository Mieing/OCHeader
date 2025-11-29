@protocol MMMusicFinderVideoDownloadHelperDelegate;

@interface MMMusicFinderVideoDownloadHelper : MMObject

@property (weak) id<MMMusicFinderVideoDownloadHelperDelegate> delegate;

- (id)init;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void).cxx_destruct;

@end
