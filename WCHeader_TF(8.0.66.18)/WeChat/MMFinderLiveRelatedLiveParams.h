@class NSArray, FinderLiveRelatedExtInfo;

@interface MMFinderLiveRelatedLiveParams : NSObject

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSArray *relatedLiveContentVMs;
@property (retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo;

- (id)description;
- (void).cxx_destruct;

@end
