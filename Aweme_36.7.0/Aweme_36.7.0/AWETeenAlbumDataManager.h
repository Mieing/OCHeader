@class NSString, NSArray, AWETeenCustomDisplayViewController;

@interface AWETeenAlbumDataManager : NSObject

@property (copy, nonatomic) NSString *currentAlbumID;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWETeenCustomDisplayViewController *currentDisplayVC;

+ (id)sharedInstance;

- (void)clearCurrentAlbumData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
