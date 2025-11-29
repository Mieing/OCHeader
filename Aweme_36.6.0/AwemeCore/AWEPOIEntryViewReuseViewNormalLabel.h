@class NSString, AWEPOIEntryViewLayout, AWEPOIItemAnchorTag;

@interface AWEPOIEntryViewReuseViewNormalLabel : UILabel <AWEPOIEntryViewReuseViewProtocol>

@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEPOIEntryViewLayout *layout;
@property (retain, nonatomic) AWEPOIItemAnchorTag *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithItem:(id)a0 entryViewScene:(long long)a1 isBGColorWhite:(BOOL)a2 entryViewLayout:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (double)viewHeight;
- (double)viewWidth;

@end
