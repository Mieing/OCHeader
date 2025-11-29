@class NSDictionary;

@interface IESECGoodsDetailEventManager : NSObject

@property (retain, nonatomic) NSDictionary *eventHandlerDictionary;

- (void)registerAllEventID;
- (Class)eventHandlerAccordingToEventComponentID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
