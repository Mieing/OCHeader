@class NSString, HTSLiveImage;

@interface EndingPageTopic : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (copy, nonatomic) NSString *topicId;

+ (id)descriptor;

@end
