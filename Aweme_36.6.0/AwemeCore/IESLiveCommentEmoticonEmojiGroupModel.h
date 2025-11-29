@class NSString, HTSLiveImage, NSMutableArray;

@interface IESLiveCommentEmoticonEmojiGroupModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *emoticonName;
@property (retain, nonatomic) HTSLiveImage *emoticonTag;
@property (retain, nonatomic) NSMutableArray *emoticonModels;

- (void).cxx_destruct;

@end
