@class NSString, NSDictionary, AWEYAPChannelGuideContext;

@interface AWEYAPChannelGuideRequestModel : NSObject

@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *sourceCode;
@property (copy, nonatomic) NSDictionary *conditionParam;
@property (nonatomic) BOOL isModal;
@property (retain, nonatomic) AWEYAPChannelGuideContext *context;

- (id)sceneUniqueKey;
- (void).cxx_destruct;
- (id)init;

@end
