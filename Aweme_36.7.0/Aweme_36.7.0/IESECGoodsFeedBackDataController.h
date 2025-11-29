@class IESECGoodsFeedBackModel;

@interface IESECGoodsFeedBackDataController : NSObject

@property (class, retain, nonatomic) IESECGoodsFeedBackModel *latestFeedBackModel;

+ (void)requestFeedBackInfoWithCompletion:(id /* block */)a0;
+ (void)requestFeedBackReportWithRequest:(id)a0;

@end
