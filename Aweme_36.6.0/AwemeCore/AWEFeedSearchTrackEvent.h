@class NSString, NSDictionary, NSNumber;

@interface AWEFeedSearchTrackEvent : NSObject

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *searchResultId;
@property (retain, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSString *duration;
@property (retain, nonatomic) NSNumber *percentage;
@property (retain, nonatomic) NSDictionary *redundancyDic;

- (id)searchVideoPlay;
- (id)searchPlayTime;
- (void).cxx_destruct;

@end
