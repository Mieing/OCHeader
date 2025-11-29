@class NSNumber, HTSLiveUser;

@interface IESLiveVSSendGiftCommand : NSObject

@property (retain, nonatomic) NSNumber *giftID;
@property (nonatomic) long long count;
@property (nonatomic) long long groupCount;
@property (nonatomic) long long sendType;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) BOOL isPreviewCommand;

- (void).cxx_destruct;

@end
