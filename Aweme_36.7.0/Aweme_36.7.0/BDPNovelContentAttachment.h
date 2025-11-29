@class NSString;

@interface BDPNovelContentAttachment : NSObject <TTTextRunDelegate>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *attachmentID;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)GetHeight;
- (double)GetAscent;
- (double)GetDescent;
- (double)GetWidth;
- (BOOL)Hide;
- (BOOL)NeedPlaceHolder;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 ascent:(double)a1 descent:(double)a2;
- (void).cxx_destruct;

@end
