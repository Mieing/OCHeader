@class NSData, NSMutableArray, HTSLiveAvatarAudioMeta;

@interface HTSLiveAvatarAudioContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSData *data_p;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSMutableArray *wordsArray;
@property (readonly, nonatomic) unsigned long long wordsArray_Count;
@property (retain, nonatomic) NSMutableArray *phonemesArray;
@property (readonly, nonatomic) unsigned long long phonemesArray_Count;
@property (retain, nonatomic) HTSLiveAvatarAudioMeta *audio;
@property (nonatomic) BOOL hasAudio;

+ (id)descriptor;

@end
