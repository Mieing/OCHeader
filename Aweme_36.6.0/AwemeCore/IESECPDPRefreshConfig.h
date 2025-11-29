@class NSArray;

@interface IESECPDPRefreshConfig : NSObject

@property (nonatomic) long long refreshCount;
@property (nonatomic) BOOL resizeOffset;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL noMoreRecommend;
@property (nonatomic) BOOL needUpdateSections;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSArray *objects;

- (void).cxx_destruct;

@end
