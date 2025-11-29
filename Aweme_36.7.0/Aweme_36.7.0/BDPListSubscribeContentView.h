@class BDPUniqueID, NSString, NSArray, NSMutableArray, UILabel, UIView, UITableView;

@interface BDPListSubscribeContentView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UIView *_infoContainer;
    UILabel *_messageLabel;
    NSString *_message;
    NSArray *_templateInfoList;
    NSMutableArray *_selectStatusList;
}

@property (nonatomic) double maxAlertHeight;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didUpdateSelectedCallback;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedIndexs;
- (id)initWithTitle:(id)a0 message:(id)a1 templateInfoList:(id)a2;
- (id)reminderStatusOnIndexes;
- (id)deSelectedIndexs;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)setupTableView;
- (void)setupTitleLabel;

@end
