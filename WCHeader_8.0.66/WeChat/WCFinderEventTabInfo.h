@class NSString, NSArray;

@interface WCFinderEventTabInfo : NSObject

@property (nonatomic) unsigned int innerTabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSArray *filterList;

- (id)initWithTopicHashTagInfo:(id)a0;
- (id)initWithMusicTopicHashTagInfo:(id)a0;
- (id)filterInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFilterType:(unsigned int)a0;
- (id)reportDict;
- (void).cxx_destruct;

@end
