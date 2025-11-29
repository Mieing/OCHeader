@class NSMutableArray, WCFinderFeedLayoutContentVM;

@interface WCFinderNearbyLiveSectionInfo : NSObject

@property (retain, nonatomic) WCFinderFeedLayoutContentVM *layoutVM;
@property (retain, nonatomic) WCFinderFeedLayoutContentVM *bottomLayoutVM;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableArray *moreFollowDataArray;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
