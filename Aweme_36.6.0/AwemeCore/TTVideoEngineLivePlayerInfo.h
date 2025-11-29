@class NSString, NSDictionary;

@interface TTVideoEngineLivePlayerInfo : NSObject

@property (nonatomic) unsigned long long engineHash;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subtag;
@property (copy, nonatomic) NSString *viewTreeInfo;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isMuted;

- (void).cxx_destruct;

@end
