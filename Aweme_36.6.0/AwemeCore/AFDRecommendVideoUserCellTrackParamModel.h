@class NSString, AWEUserModel, AWEAwemeModel;

@interface AFDRecommendVideoUserCellTrackParamModel : NSObject

@property (retain, nonatomic) AWEUserModel *recommendUserModel;
@property (nonatomic) unsigned long long postscriptWordCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;

@end
