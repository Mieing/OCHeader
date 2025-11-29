@class NSString, AWEShowMonetizeRefreshConfig;

@interface AWEShowMonetizeRefreshContext : NSObject

@property (retain, nonatomic) AWEShowMonetizeRefreshConfig *config;
@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long orderType;
@property (readonly, nonatomic) unsigned long long videoType;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
