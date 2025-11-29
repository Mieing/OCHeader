@class KindaScanWidget, NSString;

@interface WXPLiteAppBankCardOcrService : NSObject <KindaScanWidgetDelegate>

@property (copy, nonatomic) id /* block */ scanCallback;
@property (retain, nonatomic) KindaScanWidget *scanWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
