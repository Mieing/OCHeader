@class HTSLiveUser, NSString, NSArray, NSDictionary, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveGiftListRequestParams : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) long long fetchMomentType;
@property (retain, nonatomic) id<IESLiveRoomService> toRoomModel;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (nonatomic) unsigned long long giftListScene;
@property (retain, nonatomic) NSNumber *forGiftID;
@property (copy, nonatomic) NSArray *requestGiftIDs;
@property (retain, nonatomic) NSNumber *selectedGiftID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL recipientChanged;

- (void).cxx_destruct;

@end
