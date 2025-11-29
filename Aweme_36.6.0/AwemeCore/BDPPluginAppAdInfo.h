@class NSString, BDPAppAdTrackEventParams;

@interface BDPPluginAppAdInfo : NSObject

@property (weak, nonatomic) id instance;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) id /* block */ callBackAfterUpdate;
@property (retain, nonatomic) BDPAppAdTrackEventParams *trackEventParams;
@property (nonatomic) double loadRequestTime;
@property (nonatomic) BOOL isLoadSuccess;

- (void).cxx_destruct;

@end
