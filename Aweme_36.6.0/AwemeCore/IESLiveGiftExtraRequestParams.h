@class NSArray, NSString, HTSLiveUser;
@protocol IESLiveRoomService;

@interface IESLiveGiftExtraRequestParams : NSObject

@property (copy, nonatomic) NSArray *giftIds;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (copy, nonatomic) NSString *source;

- (void).cxx_destruct;

@end
