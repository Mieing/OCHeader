@class NSString, NSMutableArray;
@protocol ACCQuickSaveService;

@interface ACCQuickSaveAlbumAsyncHandler : NSObject <ACCQuickSaveAlbumOperationDelegate>

@property (class, readonly, nonatomic) ACCQuickSaveAlbumAsyncHandler *sharedHandler;

@property (retain, nonatomic) NSMutableArray *operations;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
