@class AWEMusicDetailDataContext, NSError, AWEMusicDetailResponse;

@interface AWEMusicDetailRequestPayload : NSObject

@property (retain, nonatomic) AWEMusicDetailResponse *response;
@property (weak, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
