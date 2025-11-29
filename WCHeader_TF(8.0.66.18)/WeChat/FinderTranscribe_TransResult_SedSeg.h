@class NSMutableArray;

@interface FinderTranscribe_TransResult_SedSeg : WXPBGeneratedMessage

@property (nonatomic) long long msBegin;
@property (nonatomic) long long msEnd;
@property (retain, nonatomic) NSMutableArray *events;

+ (void)initialize;

@end
