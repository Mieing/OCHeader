@class NSString;

@interface WPHKNativeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *attach;
@property (nonatomic) unsigned int iosSupportVersion;
@property (nonatomic) unsigned int androidSupportVersion;
@property (nonatomic) int cashierType;

+ (void)initialize;

@end
