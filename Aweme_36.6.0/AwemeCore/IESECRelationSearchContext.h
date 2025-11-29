@class NSString, IESECRelationSearchEnterParams, IESECWinRouterData, NSNumber;

@interface IESECRelationSearchContext : NSObject

@property (retain, nonatomic) NSNumber *shopVersion;
@property (retain, nonatomic) IESECRelationSearchEnterParams *enterParams;
@property (retain, nonatomic) IESECWinRouterData *routerParams;
@property (nonatomic) unsigned long long recentSearchType;
@property (retain, nonatomic) NSString *inboundSearchKeyword;
@property (retain, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;

@end
