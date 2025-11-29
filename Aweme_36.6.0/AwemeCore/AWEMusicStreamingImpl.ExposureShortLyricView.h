@interface AWEMusicStreamingImpl.ExposureShortLyricView : UIView <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lineIndex;
    void /* unknown type, empty encoding */ isLongLyric;
    void /* unknown type, empty encoding */ longLines;
    void /* unknown type, empty encoding */ currentLine;
    void /* unknown type, empty encoding */ wordsSizes;
    void /* unknown type, empty encoding */ lyricParser;
    void /* unknown type, empty encoding */ lyricType;
    void /* unknown type, empty encoding */ startIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lyricLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ doubleLine;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
