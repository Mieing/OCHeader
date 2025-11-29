@interface AWEFormatImpl.AWEFormatMusicSelectView : UIView <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ playId;
    void /* unknown type, empty encoding */ taskType;
    void /* unknown type, empty encoding */ clickAdjustIconHandler;
    void /* unknown type, empty encoding */ clickMusic;
    void /* unknown type, empty encoding */ selectMusic;
    void /* unknown type, empty encoding */ unselectMusic;
    void /* unknown type, empty encoding */ musicListDidLoad;
    void /* unknown type, empty encoding */ preSelectedSongID;
    void /* unknown type, empty encoding */ currentSelectedSongID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ musicList;
}

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;

@end
