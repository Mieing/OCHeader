@class NSNumber, NSString;

@interface AWEConcernFeedRequestThroughPassParamProvider : NSObject <AWEConcernFeedRequestThroughPassParamProviderProtocol>

@property (nonatomic) double lastEnterTabTimeStamp;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *reRankType;
@property (retain, nonatomic) NSNumber *fetchCount;
@property (nonatomic) BOOL alreadyLastView;
@property (nonatomic) BOOL isVCDAuthFirstTime;
@property (nonatomic) BOOL useBackUp;
@property (nonatomic) long long refreshIndex;
@property (copy, nonatomic) NSString *previousPageValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateThroughPassParamWithResponse:(id)a0;
- (id)extraParamsWithPullType:(long long)a0 currentParams:(id)a1;
- (id)commonThroughPassParams;
- (void).cxx_destruct;
- (id)init;

@end
