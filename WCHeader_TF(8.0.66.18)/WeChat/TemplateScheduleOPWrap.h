@class NSString;

@interface TemplateScheduleOPWrap : NSObject

@property (nonatomic) BOOL showAll;
@property (nonatomic) unsigned int remindSubType;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long mesSvrID;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headimg;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *contentDesc;
@property (retain, nonatomic) NSString *time;

- (void).cxx_destruct;

@end
