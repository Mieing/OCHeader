@class NSArray, AVAsset, NSString, EditVideoAttr, WCFinderVideoQualityScoreModel;

@interface WCFinderGenOptionParams : NSObject

@property (retain, nonatomic) WCFinderVideoQualityScoreModel *videoScoreModel;
@property (retain, nonatomic) EditVideoAttr *editAttr;
@property (retain, nonatomic) NSArray *selectedAssetIDs;
@property (nonatomic) BOOL isSlowMotionVideo;
@property (retain, nonatomic) AVAsset *fromAvAsset;
@property (copy, nonatomic) NSString *postFinderUsername;
@property (copy, nonatomic) NSString *originalVideoPath;

- (void).cxx_destruct;

@end
