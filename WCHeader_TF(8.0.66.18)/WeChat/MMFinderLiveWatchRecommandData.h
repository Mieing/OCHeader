@class NSData, NSMutableArray;

@interface MMFinderLiveWatchRecommandData : NSObject

@property (retain, nonatomic) NSMutableArray *navContainerReadIds;
@property (retain, nonatomic) NSData *navLastBuffer;
@property (retain, nonatomic) NSData *navContainerLastBuffer;

- (id)init;
- (void).cxx_destruct;

@end
