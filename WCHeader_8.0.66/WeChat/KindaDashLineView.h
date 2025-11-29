@class KindaDashLineUIView, MMDynamicColor, NSString;

@interface KindaDashLineView : KindaView <MMKDashLineView>

@property (retain, nonatomic) KindaDashLineUIView *m_dashLineView;
@property (nonatomic) float m_dashWidth;
@property (retain, nonatomic) MMDynamicColor *m_dashColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setDashWidth:(float)a0;
- (float)getDashWidth;
- (void)setDashColor:(id)a0;
- (id)getDashColor;
- (BOOL)getVertical;
- (void)setVertical:(BOOL)a0;
- (void).cxx_destruct;

@end
