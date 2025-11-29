@class NSArray, NSDictionary;

@interface IESECLiveListGoodsPartialRefreshInfo : NSObject

@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSArray *indexPaths;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSArray *updatedIndexPaths;
@property (nonatomic) BOOL needReloadAll;
@property (nonatomic) BOOL needReloadAllVisibleCell;

- (void).cxx_destruct;

@end
