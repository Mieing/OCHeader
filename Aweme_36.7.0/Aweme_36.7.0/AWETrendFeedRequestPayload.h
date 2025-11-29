@class NSError, AWEDetailAwemeResponse;

@interface AWETrendFeedRequestPayload : NSObject

@property (retain, nonatomic) AWEDetailAwemeResponse *response;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
