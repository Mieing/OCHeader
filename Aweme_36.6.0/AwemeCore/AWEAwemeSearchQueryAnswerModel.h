@class NSNumber, NSString;

@interface AWEAwemeSearchQueryAnswerModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) BOOL showStartTime;
@property (readonly, nonatomic) BOOL showIcon;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) long long showDelayTime;
@property (readonly, nonatomic) BOOL innerShowStartTime;
@property (readonly, nonatomic) BOOL innerShowIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
