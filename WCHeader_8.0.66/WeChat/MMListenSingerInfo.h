@class NSString, MMListenSingerInfo_JumpInfo;

@interface MMListenSingerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *singerId;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *singerPic;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) MMListenSingerInfo_JumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *singerCategoryId;
@property (nonatomic) unsigned int albumNum;
@property (nonatomic) unsigned int songNum;
@property (retain, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) NSString *translateSingerName;

+ (void)initialize;

@end
