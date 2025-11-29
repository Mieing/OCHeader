@class RivalsRecommendResponse_GroupRivals;

@interface IESLivePKRivalsModel : NSObject

@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *groupRivals;
@property (nonatomic) BOOL hasReceived;
@property (nonatomic) BOOL hasShown;

- (void).cxx_destruct;

@end
