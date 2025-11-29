@class NSString;

@interface MiniGameVideoFile : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *absFilePath;
@property (copy, nonatomic) NSString *configJson;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appState;
@property (nonatomic) unsigned int isDevEdited;

- (id)initFromLocalVideoInfo:(id)a0;
- (void).cxx_destruct;

@end
