@class NSString, NSMutableArray;

@interface AWECorrelationItemManager : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) NSMutableArray *albums;
@property (retain, nonatomic) NSMutableArray *deleteAlbums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)calibrateCorrelationAlbumItemWithItem:(id)a0;
- (void)onAWEAwemeDeleteNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
