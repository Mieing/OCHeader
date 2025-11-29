@class NSString, NSMutableArray;

@interface AWETeenSearchDataManager : NSObject

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *suggestLogId;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSMutableArray *wordIDList;
@property (retain, nonatomic) NSString *lastWatchVideoID;

+ (id)sharedInstance;

- (void)fetchAfterWatchWordsListWithFirst:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
