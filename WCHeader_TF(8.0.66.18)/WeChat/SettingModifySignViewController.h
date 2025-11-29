@class UITextView, NSString, UILabel, MMTableView;
@protocol settingModifySignDelegate;

@interface SettingModifySignViewController : MMUIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, IOplogExt> {
    UITextView *m_textView;
    UILabel *m_wordCountLabel;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSString *m_nsLastSign;
@property (weak, nonatomic) id<settingModifySignDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterSpecialChars:(id)a0;
+ (id)unicodeStringWithString:(id)a0;

- (void)updateWordCount:(int)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)initTableView;
- (void)viewDidLoad;
- (void)OnCancel;
- (void)OnReturn;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
