@class NSString;

@interface IESLiveVideoPredictScore : NSObject

@property (retain, nonatomic) NSString *anchorID;
@property (retain, nonatomic) NSString *roomID;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSString *predictSdkKey;
@property (nonatomic) int superResolutionEnable;
@property (nonatomic) float superResolutionScale;
@property (nonatomic) int sharpEnable;
@property (nonatomic) float sharpScale;

- (id)initWithAnchorID:(id)a0;
- (id)initWithAnchorID:(id)a0 roomID:(id)a1;
- (void).cxx_destruct;

@end
