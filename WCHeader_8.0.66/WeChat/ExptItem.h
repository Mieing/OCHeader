@class NSString;

@interface ExptItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int exptId;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int exptSequence;
@property (retain, nonatomic) NSString *exptContent;
@property (nonatomic) unsigned int exptType;
@property (retain, nonatomic) NSString *exptCheckSum;
@property (nonatomic) unsigned long long bucketSrc;
@property (retain, nonatomic) NSString *exptParamHashVal;

+ (void)initialize;

@end
