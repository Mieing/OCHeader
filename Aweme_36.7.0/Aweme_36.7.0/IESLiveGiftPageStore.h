@class HTSEventContext, NSArray, NSString;
@protocol IESLiveRoomService;

@interface IESLiveGiftPageStore : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSArray *giftModels;
@property (copy, nonatomic) NSArray *remainingGifts;
@property (copy, nonatomic) NSArray *giftGroup;
@property (nonatomic) BOOL hasRoomData;
@property (readonly, nonatomic) BOOL shouldShowReddot;
@property (nonatomic) long long fetchSource;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) double fetchTimeInterval;
@property (nonatomic) long long pageType;

- (void).cxx_destruct;

@end
