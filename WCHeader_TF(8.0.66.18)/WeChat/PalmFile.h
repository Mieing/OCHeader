@class NSData, NSString;

@interface PalmFile : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *palmImage;
@property (retain, nonatomic) NSData *palmVideo;
@property (retain, nonatomic) NSData *palmLivenessImage;
@property (retain, nonatomic) NSString *palmInfo;

+ (void)initialize;

@end
