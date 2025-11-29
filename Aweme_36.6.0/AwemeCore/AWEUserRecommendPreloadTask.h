@class NSDate, AWEUserRecommendResponse, NSObject;
@protocol AWEUserRecommendDataControllerProtocol;

@interface AWEUserRecommendPreloadTask : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> *dataController;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDate *completionTime;
@property (retain, nonatomic) AWEUserRecommendResponse *response;

- (void).cxx_destruct;

@end
