@class NSString, NSArray, NSDictionary;

@interface AWEMinigameInternalFlowPackResponseModel : NSObject

@property (nonatomic) long long errNo;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSArray *videoData;
@property (copy, nonatomic) NSDictionary *feedGameData;

- (void).cxx_destruct;

@end
