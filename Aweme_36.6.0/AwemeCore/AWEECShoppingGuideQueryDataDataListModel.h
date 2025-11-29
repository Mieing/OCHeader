@class NSString, NSNumber;

@interface AWEECShoppingGuideQueryDataDataListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *createTime;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
