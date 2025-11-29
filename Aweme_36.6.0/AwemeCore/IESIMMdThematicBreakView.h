@class NSString, UIView;

@interface IESIMMdThematicBreakView : UIView <IESIMMdViewProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefaultView;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
