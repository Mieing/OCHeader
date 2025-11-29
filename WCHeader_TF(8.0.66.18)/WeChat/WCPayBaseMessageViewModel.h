@class NSString, WCPayNetImageResource;

@interface WCPayBaseMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) WCPayNetImageResource *m_iconImageResource;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *descText;
@property (readonly, nonatomic) double iconSize;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSString *iconUrl;
@property (readonly, nonatomic) unsigned long long bubbleType;

- (void)updateBgBubbleType:(unsigned long long)a0;
- (void)getIconImageResource:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (void).cxx_destruct;

@end
