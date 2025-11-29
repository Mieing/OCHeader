@class NSArray;

@interface AWEProfileStoryModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *unreadStoryIDs;
@property (nonatomic) unsigned long long timeToLiveStoryStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
