@class AFDPineappleRedPacketButtonStateConfig, NSString, NSDictionary, NSNumber;

@interface AFDPineappleRedPacketConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *unopendState;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *unopendStateOwn;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *unopendStateQuiz;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *openedState;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *exhaustedState;
@property (retain, nonatomic) AFDPineappleRedPacketButtonStateConfig *expiredState;
@property (retain, nonatomic) NSNumber *requestTimeout;
@property (retain, nonatomic) NSNumber *buttonHeight;
@property (retain, nonatomic) NSNumber *buttonFontSize;
@property (retain, nonatomic) NSString *publishToast;
@property (retain, nonatomic) NSString *dialogFollowTitle;
@property (retain, nonatomic) NSString *dialogFollowMessage;
@property (retain, nonatomic) NSString *dialogFollowButton;
@property (retain, nonatomic) NSString *dialogDenyTitle;
@property (retain, nonatomic) NSString *dialogDenyMessage;
@property (retain, nonatomic) NSString *dialogDenyButton;
@property (retain, nonatomic) NSString *dialogFollowTitleFlash;
@property (retain, nonatomic) NSString *dialogFollowMessageFlash;
@property (retain, nonatomic) NSString *dialogFollowButtonFlash;
@property (retain, nonatomic) NSString *dialogDenyTitleFlash;
@property (retain, nonatomic) NSString *dialogDenyMessageFlash;
@property (retain, nonatomic) NSString *dialogDenyButtonFlash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unopendStateJSONTransformer;
+ (id)unopendStateOwnJSONTransformer;
+ (id)unopendStateQuizJSONTransformer;
+ (id)openedStateJSONTransformer;
+ (id)exhaustedStateJSONTransformer;
+ (id)expiredStateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
