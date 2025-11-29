@class NSString, BDPToolbarContext, UIView;
@protocol BDPToolbarButtonProtocol;

@interface BDPToolbarButtonCapsuleProvider : NSObject <BDPToolbarButtonProtocol> {
    BDPToolbarContext *_toolbarContext;
    UIView *_targetView;
}

@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) id<BDPToolbarButtonProtocol> moreProvider;
@property (retain, nonatomic) id<BDPToolbarButtonProtocol> closeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldShowNow:(id)a0;

- (void)setupTargetView;
- (id)toolbarContext;
- (void)updateToolBarThemeStyle;
- (void)setToolbarContext:(id)a0;
- (id)targetView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setTargetView:(id)a0;

@end
