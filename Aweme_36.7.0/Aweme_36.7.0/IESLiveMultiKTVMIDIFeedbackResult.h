@class NSString;

@interface IESLiveMultiKTVMIDIFeedbackResult : NSObject

@property (nonatomic) BOOL isSelfSing;
@property (copy, nonatomic) NSString *userAvatarUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *songName;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long level;
@property (nonatomic) BOOL isHighScoreSinging;
@property (nonatomic) BOOL hitMidiRecordAb;
@property (copy, nonatomic) NSString *midiTips;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUid;

- (void).cxx_destruct;

@end
