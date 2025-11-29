@class NSArray, NSMutableSet, NSString;

@interface AWEAnchorMusicSelectRecommendViewModel : NSObject

@property (retain, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) NSMutableSet *musicIDSet;
@property (copy, nonatomic) NSString *musicId;

- (void)loadRecommendMusicListWithBlock:(id /* block */)a0;
- (id)curUserSecUid;
- (id)userID;
- (void).cxx_destruct;

@end
