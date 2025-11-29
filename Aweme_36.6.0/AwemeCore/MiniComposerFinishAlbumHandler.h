@class NSArray;

@interface MiniComposerFinishAlbumHandler : MiniComposerFinishBaseHandler

@property (retain, nonatomic) NSArray *tasks;
@property (nonatomic) BOOL importQueueEnabled;

- (void)exportAllItems:(id /* block */)a0;
- (void).cxx_destruct;

@end
