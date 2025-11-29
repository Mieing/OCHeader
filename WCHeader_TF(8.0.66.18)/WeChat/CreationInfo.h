@class NSString;

@interface CreationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) BOOL redPoint;
@property (nonatomic) unsigned int redPointNum;
@property (retain, nonatomic) NSString *wxaData;
@property (nonatomic) unsigned int expirationTime;

+ (void)initialize;

@end
