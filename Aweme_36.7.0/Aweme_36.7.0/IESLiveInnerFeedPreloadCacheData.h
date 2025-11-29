@class NSArray, NSError, NSDictionary;
@protocol IESLiveInnerFeedDataProvider;

@interface IESLiveInnerFeedPreloadCacheData : NSObject

@property (nonatomic) long long dataType;
@property (weak, nonatomic) id<IESLiveInnerFeedDataProvider> provider;
@property (nonatomic) unsigned long long changeType;
@property (copy, nonatomic) NSArray *datas;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
