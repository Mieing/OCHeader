@class NSString, NSArray;

@interface AWEIMFTSTrackSearchData : NSObject

@property (nonatomic) double startTimeInterval;
@property (nonatomic) double endTimeInterval;
@property (nonatomic) long long limit;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSArray *types;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasTrackedSearchStart;

- (void)recordStartWithTimeInterval:(double)a0;
- (void)recordEndWithTimeInterval:(double)a0;
- (id)toSearchStartDictionary;
- (id)toSearchEndDictionary;
- (void).cxx_destruct;

@end
