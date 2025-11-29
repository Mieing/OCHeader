@class NSString, NSAttributedString;

@interface AWEIMFeedVideoUnavailableBubbleModel : NSObject <AWEIMFeedVideoUnavailableBubbleModelInterface>

@property (retain, nonatomic) NSAttributedString *titleAttriString;
@property (retain, nonatomic) NSAttributedString *subtitleAttriString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subtitleFrame;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelForMsg:(id)a0;

- (void)computeLayout;
- (void)commonInitWithMsg:(id)a0;
- (id)titleAttriStringForMsg:(id)a0;
- (id)subtitleAttriStringForMsg:(id)a0;
- (id)p_artworkTitleForMessage:(id)a0;
- (id)initWithMsg:(id)a0;
- (id)p_artworkTitleForMomentMessage:(id)a0;
- (void).cxx_destruct;

@end
