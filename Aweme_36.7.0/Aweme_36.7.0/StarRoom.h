@class NSString, HTSLiveImage;

@interface StarRoom : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorName;
@property (nonatomic) long long starCount;
@property (retain, nonatomic) HTSLiveImage *anchorAvatar;
@property (nonatomic) BOOL hasAnchorAvatar;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
