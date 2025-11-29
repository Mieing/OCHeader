@class NSString;

@interface ChattingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int chatingType;
@property (retain, nonatomic) NSString *avator;
@property (nonatomic) unsigned int version;

+ (void)initialize;

@end
