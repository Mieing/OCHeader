@class NSString, HTSLiveImage;

@interface HTSLiveDisplayUnit : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *font;
@property (nonatomic) BOOL bold;

+ (id)descriptor;

@end
