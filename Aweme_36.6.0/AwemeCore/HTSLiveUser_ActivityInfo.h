@class HTSLiveImage;

@interface HTSLiveUser_ActivityInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *badge;
@property (nonatomic) BOOL hasBadge;
@property (retain, nonatomic) HTSLiveImage *storyTag;
@property (nonatomic) BOOL hasStoryTag;

+ (id)descriptor;

@end
