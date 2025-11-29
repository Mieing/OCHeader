@class NSString, NSNumber;

@interface AWEIMXBridgeImPresentGroupPanelMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *conversationName;
@property (retain, nonatomic) NSNumber *status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
