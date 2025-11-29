@class IESLiveKaraokeAwemeStruct;

@interface IESLiveKaraokeFeedItem : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKaraokeAwemeStruct *awemeStruct;
@property (nonatomic) BOOL hasAwemeStruct;

+ (id)descriptor;

@end
