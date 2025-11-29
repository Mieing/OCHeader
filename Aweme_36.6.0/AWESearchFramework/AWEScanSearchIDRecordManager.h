@class NSMutableArray;

@interface AWEScanSearchIDRecordManager : NSObject

@property (retain, nonatomic) NSMutableArray *searchIds;

+ (id)sharedInstance;

- (id)searchIdArray;
- (void)recordSearchID:(id)a0;
- (void).cxx_destruct;

@end
