@class NSString, AWEAwemeModel, AWEAntiAddictRemindVideoInfoModel, AWEAntiAddictActivityInfoModel;

@interface AWEAntiAddictFeedInsertedModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *insertedModel;
@property (retain, nonatomic) AWEAntiAddictRemindVideoInfoModel *insertedRemindVideoInfoModel;
@property (copy, nonatomic) NSString *insertedRemindVideoAid;
@property (retain, nonatomic) AWEAntiAddictActivityInfoModel *insertedActivityInfoModel;

- (void).cxx_destruct;

@end
