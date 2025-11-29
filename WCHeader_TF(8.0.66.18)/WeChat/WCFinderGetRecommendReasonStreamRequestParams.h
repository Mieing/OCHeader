@class NSString, NSData, FinderClientStatus;

@interface WCFinderGetRecommendReasonStreamRequestParams : NSObject

@property (copy, nonatomic) NSString *bypassData;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (nonatomic) int prefetchType;

- (void).cxx_destruct;

@end
