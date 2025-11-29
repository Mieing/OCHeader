@class YYTextLayout, NSAttributedString;

@interface AWEECOMIMInteractiveSystemMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSAttributedString *contentTextDisplay;
@property (retain, nonatomic) YYTextLayout *contentTextLayout;
@property (copy, nonatomic) id /* block */ dialNumber;
@property (nonatomic) BOOL hasBackground;

+ (Class)cellClass;

- (id)msgDisplayParams;
- (void)fetchShopTelephoneWithParams:(id)a0 path:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
