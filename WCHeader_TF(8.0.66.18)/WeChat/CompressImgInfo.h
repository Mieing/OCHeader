@class NSString;

@interface CompressImgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *targetPath;
@property (nonatomic) double xScale;
@property (nonatomic) double yScale;

+ (void)initialize;

@end
