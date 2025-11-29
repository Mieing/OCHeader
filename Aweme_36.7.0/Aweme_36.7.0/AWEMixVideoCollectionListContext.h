@class NSString, AWEMixVideoModel, NSArray;

@interface AWEMixVideoCollectionListContext : NSObject

@property (retain, nonatomic) AWEMixVideoModel *mixModel;
@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *noticeID;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSArray *insertCollectedUserIDs;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
