@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol;

@interface AWELifeFeedsLynxReuseItem : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0;

@end
