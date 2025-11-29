@class NSString, NSArray, MMTableView;
@protocol VoiceVerifyLanguageDelegate;

@interface VoiceVerifyLanguageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
    MMTableView *m_tableView;
}

@property (weak, nonatomic) id<VoiceVerifyLanguageDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetLanguageNames;
+ (id)GetLanguageCodes;
+ (id)GetLanguageNameByLanguageCode:(id)a0;
+ (id)GetLanguageCodeByCurLanguage:(id)a0;

- (void)initLanguageData;
- (id)initWithLanguageCode:(id)a0;
- (BOOL)useCustomNavibar;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (void)OnBack;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
