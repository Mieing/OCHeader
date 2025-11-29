@class NSString;

@interface IESLiveGuideGameCPBubbleModel : NSObject

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) long long msgType;

- (void).cxx_destruct;

@end
