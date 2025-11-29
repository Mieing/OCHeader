@class HTSLiveImage;

@interface HTSLiveGiftImage : IESLivePBBaseMessage

@property (nonatomic) int fetchFrom;
@property (nonatomic) int groupId;
@property (nonatomic) int type;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
