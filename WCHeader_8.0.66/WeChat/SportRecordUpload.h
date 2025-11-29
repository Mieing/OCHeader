@class NSString;

@interface SportRecordUpload : WXPBGeneratedMessage

@property (nonatomic) unsigned int sportTypeId;
@property (nonatomic) unsigned int sportTime;
@property (nonatomic) unsigned int sportDistance;
@property (nonatomic) unsigned int sportNumber;
@property (nonatomic) unsigned int sportCalorie;
@property (retain, nonatomic) NSString *sportUrl;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int duration;

+ (void)initialize;

@end
