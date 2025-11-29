@class NSString;

@interface EcsModalParams : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *cancelButtonWording;
@property (retain, nonatomic) NSString *confirmButtonWording;

+ (void)initialize;

@end
