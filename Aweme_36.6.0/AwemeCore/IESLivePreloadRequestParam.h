@class IESLiveEnterRoomBusinessParamsArray, HTSEventContext, NSMutableDictionary, IESLiveEnterRoomEventPramas, NSDictionary, HTSLiveRoom;

@interface IESLivePreloadRequestParam : NSObject

@property (retain, nonatomic) NSMutableDictionary *insideParams;
@property (weak, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveEnterRoomEventPramas *eventParams;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (readonly, nonatomic) NSDictionary *otherParams;

- (void)addOtherObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
