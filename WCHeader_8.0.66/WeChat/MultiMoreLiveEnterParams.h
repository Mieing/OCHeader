@class NSString;

@interface MultiMoreLiveEnterParams : NSObject

@property (nonatomic) BOOL useDarkStyle;
@property (nonatomic) long long scene;
@property (nonatomic) unsigned long long selectTabId;
@property (nonatomic) unsigned long long selectSubTabId;
@property (retain, nonatomic) NSString *byPassInfo;
@property (nonatomic) int commentScene;
@property (nonatomic) int entryScene;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *feedExportId;
@property (retain, nonatomic) NSString *feedNonceId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long versionType;

- (id)description;
- (void).cxx_destruct;

@end
