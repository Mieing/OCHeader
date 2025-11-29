@class NSString;

@interface FileIdAndStatus : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dataId;
@property (nonatomic) unsigned int isThumb;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
