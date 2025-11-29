@class NSString, NSData, ResultCommContent;

@interface DocResult : WXPBGeneratedMessage

@property (retain, nonatomic) ResultCommContent *commContent;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *date;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *weappPath;
@property (nonatomic) unsigned int weappVersion;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSData *debugInfo;
@property (nonatomic) int showStyle;

+ (void)initialize;

@end
