@class NSString, IESGCPPBGameImageBundler;

@interface IESGCPPBGameDetailVideoInfo : GPBMessage

@property (copy, nonatomic) NSString *videoCoverURL;
@property (copy, nonatomic) NSString *videoPlayURL;
@property (nonatomic) int rotation;
@property (retain, nonatomic) IESGCPPBGameImageBundler *coverImage;
@property (nonatomic) BOOL hasCoverImage;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (nonatomic) double duration;

+ (id)descriptor;

@end
