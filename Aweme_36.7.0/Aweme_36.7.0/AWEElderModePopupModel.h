@class NSString, NSArray;

@interface AWEElderModePopupModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *leftBtnText;
@property (readonly, copy, nonatomic) NSString *rightBtnText;
@property (readonly, copy, nonatomic) NSArray *valuePoints;
@property (readonly, nonatomic) long long frequencyDailyCtrl;
@property (readonly, nonatomic) long long newUserPopAt;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valuePointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
