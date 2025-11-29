@class NSString;

@interface ScheduleOPWrap : NSObject <NSCopying>

@property (nonatomic) BOOL showAll;
@property (nonatomic) unsigned int remindSubType;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long mesSvrID;
@property (nonatomic) unsigned int favID;
@property (nonatomic) unsigned int favLocalID;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headimg;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *contentDesc;
@property (retain, nonatomic) NSString *time;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
