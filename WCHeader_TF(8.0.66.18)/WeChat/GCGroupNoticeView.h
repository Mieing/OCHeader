@class NSString, RichTextView, NSMutableDictionary;
@protocol GCGroupNoticeViewDelegate;

@interface GCGroupNoticeView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) NSMutableDictionary *linkJumpInfoDict;
@property (weak, nonatomic) id<GCGroupNoticeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backEndColorFromColorStr:(id)a0;
+ (id)backEndColorFromColor:(id)a0;
+ (id)getTestJumpInfo;
+ (id)getHalfScreen;
+ (id)getFakeNotice;

- (id)initWithWidth:(double)a0 chatRoomNotice:(id)a1;
- (id)rgbaStrFromBackEndColor:(id)a0;
- (id)rgbaStrFromArgbStr:(id)a0;
- (id)getContentStrFromContentBlockList:(id)a0;
- (id)linkBlockForUrl:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onNoticeCloseBtnClick;
- (void).cxx_destruct;

@end
