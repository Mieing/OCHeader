@class NSString;

@interface VideoItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *videoURL;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (id)descriptor;

@end
