@class RTVVoipInitialAction, NSArray, NSString, NSDictionary, NSNumber;
@protocol Optional;

@interface RTVVoipCallInfo : JSONModel

@property (copy, nonatomic) NSArray<Optional> *participators;
@property (copy, nonatomic) NSString<Optional> *conversationID;
@property (retain, nonatomic) NSNumber<Optional> *cameraOff;
@property (copy, nonatomic) NSString<Optional> *extString;
@property (retain, nonatomic) NSString *callId;
@property (copy, nonatomic) NSString<Optional> *version;
@property (nonatomic) long long type;
@property (nonatomic) long long callType;
@property (readonly, nonatomic) long long enterType;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) RTVVoipInitialAction<Optional> *initialAction;
@property (retain, nonatomic) NSNumber<Optional> *createAt;
@property (nonatomic) long long roomType;
@property (nonatomic) long long capacityType;
@property (retain, nonatomic) NSNumber<Optional> *capacity;
@property (copy, nonatomic) NSString<Optional> *creator;
@property (readonly, copy, nonatomic) NSDictionary *ext;
@property (readonly, nonatomic) BOOL roomInteractionWindow;
@property (readonly, nonatomic) long long voipInvokeBizType;
@property (readonly, nonatomic) BOOL isConvCreatedByServer;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;

- (id)initWithV1InfoDictionary:(id)a0;
- (void)setInitialActionWithNSString:(id)a0;
- (void)setInitialActionWithNSDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
