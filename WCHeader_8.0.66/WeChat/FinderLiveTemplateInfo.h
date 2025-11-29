@class NSData, NSString;

@interface FinderLiveTemplateInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int infoType;
@property (retain, nonatomic) NSData *infoBuffer;
@property (retain, nonatomic) NSString *versionWording;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned long long serverTimestamp;

+ (void)initialize;

@end
