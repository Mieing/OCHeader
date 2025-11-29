@class NSArray, NSString, NSData, NSError;

@interface MMFinderLiveKTVSongResourceParseResult : NSObject

@property (retain, nonatomic) NSArray *sentenceList;
@property (retain, nonatomic) NSArray *sentenceTimeList;
@property (retain, nonatomic) NSData *noteData;
@property (retain, nonatomic) NSString *songPath;
@property (retain, nonatomic) NSError *parseError;

- (void).cxx_destruct;

@end
