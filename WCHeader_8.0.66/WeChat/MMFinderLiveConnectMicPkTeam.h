@class NSMutableArray;

@interface MMFinderLiveConnectMicPkTeam : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *users;
@property (nonatomic) long long pkResult;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long genericScore;
@property (readonly, nonatomic) BOOL isEmptyTeam;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
