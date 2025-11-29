@class NSString, NSMutableArray;

@interface AWESearchHomeDCFeedConsumeInfo : NSObject

@property (copy, nonatomic) NSString *latestClickedIdsString;
@property (retain, nonatomic) NSMutableArray *itemClickIdsArray;
@property (retain, nonatomic) NSMutableArray *clickModelsArray;

+ (id)shareInfo;

- (void)updateLatestClickIdsString;
- (void)updateLatestClickedModel:(id)a0;
- (void).cxx_destruct;

@end
