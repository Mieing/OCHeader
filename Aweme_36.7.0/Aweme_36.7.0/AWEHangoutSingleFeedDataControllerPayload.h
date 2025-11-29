@class NSArray, NSString, NSNumber;

@interface AWEHangoutSingleFeedDataControllerPayload : NSObject

@property (retain, nonatomic) NSArray *modelsArray;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long miniDetailType;
@property (retain, nonatomic) NSNumber *isOuter;
@property (retain, nonatomic) NSNumber *refreshCount;
@property (retain, nonatomic) NSNumber *loadMoreCount;

- (void).cxx_destruct;

@end
