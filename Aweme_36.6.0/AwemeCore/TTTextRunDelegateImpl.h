@class NSString;
@protocol TTTextDrawerDelegate;

@interface TTTextRunDelegateImpl : NSObject <TTTextRunDelegate>

@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double width;
@property (weak, nonatomic) id attachment;
@property (weak, nonatomic) id<TTTextDrawerDelegate> drawer;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)GetHeight;
- (double)GetAscent;
- (double)GetDescent;
- (double)GetWidth;
- (BOOL)Hide;
- (id)initWithAscent:(double)a0 Descent:(double)a1 Width:(double)a2 Attachment:(id)a3;
- (id)GetAttachment;
- (void)SetHide:(BOOL)a0;
- (void).cxx_destruct;

@end
