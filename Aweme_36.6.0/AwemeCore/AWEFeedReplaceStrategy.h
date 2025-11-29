@class NSString, AWEFeedReplaceVideosConfigModel;

@interface AWEFeedReplaceStrategy : NSObject <AWEFeedReplaceVideosStrategyProtocol>

@property (retain, nonatomic) AWEFeedReplaceVideosConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyClassList;
+ (id)createInstanceWithConfig:(id)a0;

- (void)executeWithRequestExtraParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDict:(id)a0;

@end
