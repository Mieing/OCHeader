@class NSString, NSData;

@interface WWShareTypeLink : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSData *base64ThumbData;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;

+ (void)initialize;

@end
