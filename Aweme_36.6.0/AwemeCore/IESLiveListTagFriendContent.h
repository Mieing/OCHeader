@class HTSLiveImage;

@interface IESLiveListTagFriendContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *friendTag;
@property (nonatomic) BOOL hasFriendTag;

+ (id)descriptor;

@end
