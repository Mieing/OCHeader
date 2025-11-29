@class NSString;

@interface PopUpsItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpH5Url;
@property (retain, nonatomic) NSString *tinyappUsername;
@property (retain, nonatomic) NSString *tinyappPath;
@property (retain, nonatomic) NSString *cancelButtonWording;
@property (retain, nonatomic) NSString *confirmButtonWording;

+ (void)initialize;

@end
