@class NSString, HTSLiveImage, NSArray;

@interface IESLiveCommentActivityEmojiModel : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *idString;
@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) HTSLiveImage *tagImage;
@property (copy, nonatomic) NSArray *emojiArray;
@property (nonatomic) long long insertToQuickEmojiNum;

- (void).cxx_destruct;

@end
