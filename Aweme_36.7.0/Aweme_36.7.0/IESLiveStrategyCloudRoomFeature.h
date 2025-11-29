@class NSString, NSMutableDictionary;

@interface IESLiveStrategyCloudRoomFeature : NSObject

@property (retain, nonatomic) NSMutableDictionary *features;
@property (retain, nonatomic) NSString *anchorId;

- (void)updateFeatures:(id)a0;
- (id)getFeatureValue:(id)a0;
- (id)allFeatureValues;
- (id)initWithAnchorId:(id)a0;
- (void).cxx_destruct;

@end
