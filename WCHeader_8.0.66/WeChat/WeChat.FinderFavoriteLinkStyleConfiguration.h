@interface WeChat.FinderFavoriteLinkStyleConfiguration : NSObject <WCFinderViewSizable> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ coverURL;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ feedCount;
    void /* unknown type, empty encoding */ nickname;
    void /* unknown type, empty encoding */ displayTime;
    void /* unknown type, empty encoding */ onDeleteAction;
    void /* unknown type, empty encoding */ onLongPress;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic, readonly) long long hash;

- (id)initWithIdentifier:(unsigned long long)a0 coverURL:(id)a1 title:(id)a2 feedCount:(long long)a3 nickname:(id)a4 displayTime:(id)a5;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
