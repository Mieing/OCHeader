@class LiveEnterRoomRequestModel, HTSEventContext, NSString, NSDictionary, HTSLiveRoom;

@interface IESLivePreviewEnterParam : NSObject

@property (retain, nonatomic) LiveEnterRoomRequestModel *roomRequestModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (weak, nonatomic) HTSLiveRoom *roomModel;
@property (copy, nonatomic) NSString *ecomGoodsList;
@property (nonatomic) BOOL needVideoId;
@property (nonatomic) BOOL isEnterFromSchema;
@property (copy, nonatomic) NSString *shopGuideId;
@property (copy, nonatomic) NSDictionary *businessParams;

- (void).cxx_destruct;

@end
