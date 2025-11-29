@class AWETrendDetailResponse, NSError;

@interface AWETrendDetailRequestPayload : NSObject

@property (retain, nonatomic) AWETrendDetailResponse *response;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
