@class NSNumber, AWELiveVideoFeedModel, NSDate;

@interface AWELiveCheckModel : NSObject

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) AWELiveVideoFeedModel *model;
@property (retain, nonatomic) NSDate *timestamp;

- (id)initWithUserID:(id)a0 AWELiveVideoFeedModel:(id)a1;
- (void).cxx_destruct;

@end
