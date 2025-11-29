@class NSString, FLTStatusPlatformMediaSize;

@interface FLTStatusPlatformMediaItem : WXPBGeneratedMessage

@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *originPath;
@property (retain, nonatomic) FLTStatusPlatformMediaSize *originSize;
@property (retain, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) FLTStatusPlatformMediaSize *thumbSize;

+ (void)initialize;

@end
