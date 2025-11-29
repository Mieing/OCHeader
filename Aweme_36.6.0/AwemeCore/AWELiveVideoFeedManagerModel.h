@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWELiveVideoFeedManagerModel : NSObject

@property (nonatomic) unsigned long long checkItemsCount;
@property (retain, nonatomic) NSMutableArray *userList;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *timestampDic;
@property (nonatomic) long long modelLocation;
@property (nonatomic) long long fetchCount;

- (id)initWithCheckCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
