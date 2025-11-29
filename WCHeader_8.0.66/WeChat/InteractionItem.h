@class NSString;

@interface InteractionItem : WXPBGeneratedMessage

@property (nonatomic) int iconType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *labelWording;
@property (nonatomic) unsigned int enableJump;

+ (void)initialize;

@end
