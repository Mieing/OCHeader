@class NSString, BFTaskCompletionSource;

@interface AWEAuthorizeStateManager : NSObject

@property (nonatomic) BOOL enableAccountAuthorize;
@property (nonatomic) BOOL unbind;
@property (nonatomic) BOOL importFans;
@property (nonatomic) BOOL enableFollowChainAuthorize;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) BFTaskCompletionSource *authorizeTask;

+ (BOOL)needBindPhone;

- (void).cxx_destruct;
- (id)scope;

@end
