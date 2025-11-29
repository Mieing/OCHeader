@class HTSEventContext, NSMutableDictionary;

@interface HTSFormatEnterRoomEventParams : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextParams;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (id)getContextParams;
- (void)addContextParams:(id)a0;
- (void)setEventContext:(id)a0 callTrace:(id)a1 formatAisle:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
