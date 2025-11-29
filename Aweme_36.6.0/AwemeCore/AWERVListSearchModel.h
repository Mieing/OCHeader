@class NSArray, NSString, AWEAwemeModel;

@interface AWERVListSearchModel : NSObject

@property (copy, nonatomic) NSArray *queryList;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL hasTrackedShow;

- (void).cxx_destruct;

@end
