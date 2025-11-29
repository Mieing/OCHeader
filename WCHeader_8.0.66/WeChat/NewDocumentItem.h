@class NSString, RedDot;

@interface NewDocumentItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *directUrl;
@property (nonatomic) unsigned int cellId;
@property (nonatomic) unsigned int urlType;
@property (retain, nonatomic) NSString *appUsername;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) RedDot *redDot;

+ (void)initialize;

@end
