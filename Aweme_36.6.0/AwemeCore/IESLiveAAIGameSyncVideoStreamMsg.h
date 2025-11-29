@interface IESLiveAAIGameSyncVideoStreamMsg : NSObject

@property (nonatomic) double ts;
@property (retain, nonatomic) id metaData;

- (id)initWithTS:(double)a0 metaData:(id)a1;
- (void).cxx_destruct;

@end
