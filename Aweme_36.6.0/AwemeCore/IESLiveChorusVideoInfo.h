@class NSString, HTSLiveImage;

@interface IESLiveChorusVideoInfo : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *itemURL;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *authorName;
@property (nonatomic) long long useTimes;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
