@class NSString;

@interface AdWeAppPageRecordInfo : NSObject

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSString *adInfo;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *sceneNote;

- (void).cxx_destruct;

@end
