@class NSString, NSArray;

@interface WASubscriptionMessagePageSheetMessageItem : MMObject

@property (nonatomic) int templateType;
@property (copy, nonatomic) NSString *wording;
@property (copy, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSArray *detailList;
@property (copy, nonatomic) NSString *sceneDescription;
@property (readonly, nonatomic) BOOL isAudioTemplate;
@property (readonly, copy, nonatomic) NSString *audioTemplateUrl;
@property (nonatomic) BOOL isAcceptWithAudio;
@property (readonly, nonatomic) BOOL isForceNotifyTemplate;
@property (nonatomic) BOOL isAcceptWithForceNotify;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long infoButtonClickCount;

- (id)initWith:(id)a0;
- (void)fillWithMsgItem:(id)a0;
- (id)toReportDictionary;
- (id)toUIItem;
- (void).cxx_destruct;

@end
