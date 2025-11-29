@class NSString;

@interface KindaListView : KindaView <MMKListView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addHeader:(id)a0;
- (void)addFooter:(id)a0;
- (void)setImpl:(id)a0;
- (void)setVertical:(BOOL)a0;
- (BOOL)getVertical;
- (void)setShowScrollBar:(BOOL)a0;
- (BOOL)getShowScrollBar;
- (void)setOnScrollCallback:(id)a0;

@end
