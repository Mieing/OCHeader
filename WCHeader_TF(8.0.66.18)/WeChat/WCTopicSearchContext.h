@class NSString;

@interface WCTopicSearchContext : NSObject

@property (nonatomic) long long sourceType;
@property (nonatomic) long long sourceScene;
@property (copy, nonatomic) NSString *sourceSceneId;
@property (copy, nonatomic) NSString *inputQuery;
@property (nonatomic) unsigned long long curseLocation;

- (void).cxx_destruct;

@end
