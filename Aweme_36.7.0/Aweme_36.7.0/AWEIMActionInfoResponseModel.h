@class NSArray, NSString;

@interface AWEIMActionInfoResponseModel : IESIMBaseApiModel <IESIMSendUserActionResponseProtocol>

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSArray *actionsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
