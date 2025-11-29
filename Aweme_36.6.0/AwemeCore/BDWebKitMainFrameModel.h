@class NSString, NSDictionary, NSMutableDictionary;

@interface BDWebKitMainFrameModel : NSObject

@property (nonatomic) BOOL loadFinishWithLocalData;
@property (copy) NSString *latestWebViewURLString;
@property (nonatomic) unsigned long long mainFrameStatus;
@property (retain, nonatomic) NSDictionary *mainFrameStatModel;
@property (retain, nonatomic) NSMutableDictionary *mainFramePerformanceTimingModel;

- (void).cxx_destruct;

@end
