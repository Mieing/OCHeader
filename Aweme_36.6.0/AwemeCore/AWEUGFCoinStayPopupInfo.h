@class NSString, AWEUGFCoinStayPopupButton;

@interface AWEUGFCoinStayPopupInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEUGFCoinStayPopupButton *leftBtn;
@property (retain, nonatomic) AWEUGFCoinStayPopupButton *rightBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
