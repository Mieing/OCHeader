@class NSString, HTSLiveImage;

@interface Content : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;

+ (id)descriptor;

@end
