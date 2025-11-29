@class NSString;

@interface AWEIMMangoShareClickInfo : NSObject

@property (nonatomic) BOOL closePage;
@property (nonatomic) BOOL needEnterConversation;
@property (copy, nonatomic) NSString *openSchema;
@property (nonatomic) BOOL needWithText;
@property (nonatomic) BOOL disableTextInFloatMode;
@property (nonatomic) BOOL disableAutoClickToast;
@property (nonatomic) BOOL keepTapBeforeCompletion;
@property (nonatomic) BOOL shouldRequestServer;
@property (copy, nonatomic) NSString *requestScene;
@property (copy, nonatomic) NSString *extraRequestParams;
@property (nonatomic) BOOL isLynxUpdateButton;
@property (copy, nonatomic) NSString *sendSuccessButtonText;
@property (copy, nonatomic) NSString *lynxUpdateVerifyKey;
@property (nonatomic) BOOL clickedButtonDisable;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
