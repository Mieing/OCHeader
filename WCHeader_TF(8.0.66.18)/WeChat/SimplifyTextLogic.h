@class NSString, NSData;

@interface SimplifyTextLogic : NSObject

@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) NSString *simplifingText;
@property (retain, nonatomic) NSString *simplifiedText;
@property (nonatomic) BOOL isWorking;
@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSData *buffer;
@property (copy, nonatomic) id /* block */ completeBlock;

+ (BOOL)isSimplifyTextEnable;

- (void)simplifyText:(id)a0 complete:(id /* block */)a1;
- (void)startSimplifyText;
- (void)startGetSimplifyRes;
- (void).cxx_destruct;

@end
