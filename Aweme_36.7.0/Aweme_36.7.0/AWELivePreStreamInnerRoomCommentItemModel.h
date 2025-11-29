@class NSString, HTSLiveImage;

@interface AWELivePreStreamInnerRoomCommentItemModel : NSObject

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *featuredChat;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
