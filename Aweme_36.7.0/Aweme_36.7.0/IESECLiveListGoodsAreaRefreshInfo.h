@class NSArray, NSDictionary;

@interface IESECLiveListGoodsAreaRefreshInfo : NSObject

@property (nonatomic) long long anchorType;
@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSArray *indexPaths;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSArray *updatedIndexPaths;
@property (nonatomic) BOOL needReloadAll;
@property (nonatomic) BOOL needReloadAllVisibleCell;

- (void).cxx_destruct;

@end
