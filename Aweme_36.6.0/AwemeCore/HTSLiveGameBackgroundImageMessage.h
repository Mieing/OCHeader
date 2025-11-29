@class HTSLiveCommon, HTSLiveImage;

@interface HTSLiveGameBackgroundImageMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) long long changeMs;

+ (id)descriptor;

@end
