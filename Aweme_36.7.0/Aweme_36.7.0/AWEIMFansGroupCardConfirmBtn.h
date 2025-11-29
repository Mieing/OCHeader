@class NSString;

@interface AWEIMFansGroupCardConfirmBtn : UIButton <IESIMGroupCardConfirmBtnProtocol>

@property (nonatomic) BOOL disableUIOptExpr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUIStyleEnalbe;
- (void)setUIStyleDisable;
- (void)switchStyle:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;

@end
