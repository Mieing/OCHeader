@class NSArray;

@interface MMFinderLiveKtvPlayerWaitListInfo : NSObject

@property (nonatomic) unsigned int playerWaitListAllSize;
@property (retain, nonatomic) NSArray *playerWaitList;
@property (nonatomic) unsigned long long version;

+ (id)generateWaitListInfoFromPb:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
