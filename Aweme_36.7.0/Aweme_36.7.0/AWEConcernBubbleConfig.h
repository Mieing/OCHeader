@class NSString, NSArray;
@protocol AWEInteractNotificationProtocol;

@interface AWEConcernBubbleConfig : NSObject <AWEConcernBubbleConfigProtocol>

@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) id<AWEInteractNotificationProtocol> authorInfo;
@property (retain, nonatomic) NSArray *firstOriginURLList;
@property (retain, nonatomic) NSArray *secondOriginURLList;
@property (copy, nonatomic) NSString *yellowDotComponentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maxBubbleLabelWidth;
+ (id)animationConfigWithMode:(long long)a0 authorInfo:(id)a1;
+ (id)nicknameLengthTruncate:(id)a0 noticeText:(id)a1;

- (void).cxx_destruct;

@end
