@class NSString;

@interface PopItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *errorWording;
@property (retain, nonatomic) NSString *cancelButtonWording;
@property (retain, nonatomic) NSString *confirmButtonWording;
@property (retain, nonatomic) NSString *directUrl;
@property (nonatomic) unsigned int actionCode;

+ (void)initialize;

@end
