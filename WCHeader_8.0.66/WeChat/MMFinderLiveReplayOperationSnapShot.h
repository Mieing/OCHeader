@interface MMFinderLiveReplayOperationSnapShot : NSObject

@property (nonatomic) unsigned long long timeIndex;

- (id)snapShotKey;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
