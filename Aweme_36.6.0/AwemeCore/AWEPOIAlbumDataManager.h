@class NSMutableDictionary;

@interface AWEPOIAlbumDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *albumDataProcessors;

+ (id)sharedInstance;

- (id)albumDataProcessor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
