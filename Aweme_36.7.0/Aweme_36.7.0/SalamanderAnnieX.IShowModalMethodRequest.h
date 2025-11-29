@class NSString;

@interface SalamanderAnnieX.IShowModalMethodRequest : NSObject {
    void /* function */ content;
    void /* function */ title;
    void /* unknown type, empty encoding */ showCancel;
    void /* function */ cancelText;
    void /* function */ confirmText;
    void /* unknown type, empty encoding */ tapMaskToDismiss;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *cancelText;
@property (nonatomic, copy) NSString *confirmText;

- (void).cxx_destruct;
- (id)init;

@end
