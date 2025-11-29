@class MMFinderLiveSensitiveDataItem;

@interface MMFinderLiveSensitiveActionItem : NSObject

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) MMFinderLiveSensitiveDataItem *sensitiveItem;
@property (nonatomic) unsigned long long actionId;

- (id)description;
- (void).cxx_destruct;

@end
