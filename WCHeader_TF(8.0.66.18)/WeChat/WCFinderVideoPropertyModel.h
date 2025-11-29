@class WCFinderVideoBasisModel;

@interface WCFinderVideoPropertyModel : NSObject

@property (retain, nonatomic) WCFinderVideoBasisModel *basisModel;
@property (nonatomic) unsigned long long colorIndex;
@property (nonatomic) unsigned long long lensCount;

- (void).cxx_destruct;

@end
