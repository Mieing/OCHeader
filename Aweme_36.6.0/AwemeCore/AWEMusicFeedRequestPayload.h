@class NSString, NSNumber, NSError;

@interface AWEMusicFeedRequestPayload : NSObject

@property (nonatomic) long long awemeListCount;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
