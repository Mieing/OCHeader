@class NSNumber, HTSLiveGiftStruct, NSString;

@interface IESLiveGiftAIClientResortGiftModel : NSObject

@property (retain, nonatomic) NSNumber *giftId;
@property (nonatomic) long long resortIndex;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) HTSLiveGiftStruct *giftStruct;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
