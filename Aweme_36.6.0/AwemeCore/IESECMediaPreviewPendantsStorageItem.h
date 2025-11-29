@class IESECPdpStdLynxElement, UIView;

@interface IESECMediaPreviewPendantsStorageItem : NSObject

@property (retain, nonatomic) UIView *pendantsView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL didJSContextReady;
@property (retain, nonatomic) IESECPdpStdLynxElement *lynxElement;
@property (nonatomic) BOOL didSendShowEvent;

- (void).cxx_destruct;

@end
