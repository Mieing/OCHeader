@class NSString;

@interface AWELiveAnchorShareRedEnvelopeChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (id)commonParams:(id)a0;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;

@end
