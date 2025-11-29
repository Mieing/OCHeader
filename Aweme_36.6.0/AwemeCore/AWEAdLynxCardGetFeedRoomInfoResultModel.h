@class NSString, NSNumber;

@interface AWEAdLynxCardGetFeedRoomInfoResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *displayValue;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
