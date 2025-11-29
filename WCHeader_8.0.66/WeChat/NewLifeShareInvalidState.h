@class NSString, WCFinderGeneralJumpErrMsgModel, UINavigationController;

@interface NewLifeShareInvalidState : NSObject

@property (nonatomic) int code;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) WCFinderGeneralJumpErrMsgModel *spamInfo;
@property (retain, nonatomic) NSString *nonExistInfo;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completion;

+ (id)stateFromCode:(int)a0 message:(id)a1;
+ (id)nonExistInfoFromCode:(int)a0 message:(id)a1;
+ (id)errorMessageModelFromMessage:(id)a0;

- (void)updateLocalDataItemWithFeedId:(id)a0;
- (void)handleInvalidState;
- (BOOL)handleJumpToWeb;
- (BOOL)handleJumpToLiteApp;
- (void)handleJumpToNativeNonExist:(id)a0;
- (void).cxx_destruct;

@end
