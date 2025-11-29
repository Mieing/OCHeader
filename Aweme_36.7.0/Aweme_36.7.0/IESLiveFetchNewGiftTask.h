@class NSNumber, GPBInt64Array, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveFetchNewGiftTask : NSObject

@property (retain, nonatomic) NSNumber *giftID;
@property (retain, nonatomic) GPBInt64Array *requiredAssetsArray;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
