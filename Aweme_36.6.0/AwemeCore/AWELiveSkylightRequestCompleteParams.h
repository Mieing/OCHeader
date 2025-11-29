@class NSError;

@interface AWELiveSkylightRequestCompleteParams : NSObject

@property (nonatomic) BOOL hasSkylight;
@property (retain, nonatomic) NSError *requestError;

- (id)initWithHasSkylight:(BOOL)a0 requestError:(id)a1;
- (void).cxx_destruct;

@end
