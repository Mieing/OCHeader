@class NSString;

@interface TextStatusData_Item : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *statusId;
@property (retain, nonatomic) NSString *statusExtInfo;
@property (retain, nonatomic) NSString *score;
@property (nonatomic) unsigned int profileSeq;
@property (nonatomic) float contentScore;
@property (retain, nonatomic) NSString *privateInfo;
@property (nonatomic) unsigned long long privateInfoVersion;
@property (retain, nonatomic) NSString *publicInfo;
@property (nonatomic) unsigned long long publicInfoVersion;
@property (retain, nonatomic) NSString *statusIdList;

+ (void)initialize;

@end
