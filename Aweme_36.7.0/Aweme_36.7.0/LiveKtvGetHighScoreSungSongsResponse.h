@class LiveKtvGetHighScoreSungSongsResponse_ResponseData;

@interface LiveKtvGetHighScoreSungSongsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LiveKtvGetHighScoreSungSongsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
