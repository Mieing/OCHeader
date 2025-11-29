@class NSString;

@interface GetSnsMasterBackGroundResponse_Media : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) unsigned int privateNum;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumb;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int totalSize;
@property (nonatomic) unsigned int urlMediaType;
@property (nonatomic) unsigned int thumbMediaType;

+ (void)initialize;

@end
