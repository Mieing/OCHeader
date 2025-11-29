@class NSIndexPath;

@interface WCFinderNearbyMoreLiveCellPlayModel : NSObject

@property (retain, nonatomic) NSIndexPath *leftPlayingIndexPath;
@property (retain, nonatomic) NSIndexPath *rightPlayingIndexPath;

- (BOOL)isEqual:(id)a0;
- (BOOL)containIndexPath:(id)a0;
- (void).cxx_destruct;

@end
