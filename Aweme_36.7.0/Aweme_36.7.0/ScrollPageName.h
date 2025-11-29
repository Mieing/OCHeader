@class NSString, HTSLiveImage;

@interface ScrollPageName : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long relatedTopicId;
@property (retain, nonatomic) HTSLiveImage *nameImage;
@property (nonatomic) BOOL hasNameImage;

+ (id)descriptor;

@end
