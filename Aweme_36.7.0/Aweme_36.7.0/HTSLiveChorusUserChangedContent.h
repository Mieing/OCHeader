@class NSString, NSMutableArray, IESLiveChorusConcertSong;

@interface HTSLiveChorusUserChangedContent : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) long long userNum;
@property (copy, nonatomic) NSString *scoreStr;
@property (copy, nonatomic) NSString *userNumStr;
@property (retain, nonatomic) IESLiveChorusConcertSong *concertSong;
@property (nonatomic) BOOL hasConcertSong;
@property (retain, nonatomic) NSMutableArray *chorusMidiRankArray;
@property (readonly, nonatomic) unsigned long long chorusMidiRankArray_Count;

+ (id)descriptor;

@end
