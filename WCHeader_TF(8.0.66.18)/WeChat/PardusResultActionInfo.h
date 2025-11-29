@class NSString;

@interface PardusResultActionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *weappPath;
@property (nonatomic) unsigned int weappVersion;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *ctrlInfo;
@property (retain, nonatomic) NSString *musicObjectXmlDesc;

+ (void)initialize;

@end
