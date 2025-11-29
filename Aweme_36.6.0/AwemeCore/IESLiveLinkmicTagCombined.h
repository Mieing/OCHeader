@class HTSLiveUser, IESLiveMicPosTagInfo, NSString, NSArray, IESLiveUserHighScoreSongTag;

@interface IESLiveLinkmicTagCombined : NSObject <IESLiveLinkmicTagCombined>

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) IESLiveMicPosTagInfo *mixOperation;
@property (retain, nonatomic) IESLiveUserHighScoreSongTag *highScoreSong;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSArray *tagsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
