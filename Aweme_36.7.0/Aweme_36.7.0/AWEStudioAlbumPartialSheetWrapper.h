@class DUXPartialSheet, CAKAlbumViewController, NSString;

@interface AWEStudioAlbumPartialSheetWrapper : NSObject <DUXPartialSheetDelegate>

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (retain, nonatomic) DUXPartialSheet *mainSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetSheetScrollView;
- (void).cxx_destruct;

@end
