@class NSString, NSDate;

@interface IESIMFeedCardTapTrackItem : NSObject

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSDate *tapTime;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *msgId;

- (void).cxx_destruct;

@end
