@class NSString;
@protocol AWEGrouponLifeFeedsLynxCardProtocol;

@interface AWEGrouponLifeFeedsLynxReuseItem : NSObject

@property (readonly, nonatomic) NSString *sessionId;
@property (retain, nonatomic) id<AWEGrouponLifeFeedsLynxCardProtocol> lynxView;

- (id)initWithLynxView:(id)a0;
- (void).cxx_destruct;

@end
