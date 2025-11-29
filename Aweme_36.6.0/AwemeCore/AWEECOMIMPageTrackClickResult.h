@class NSString;

@interface AWEECOMIMPageTrackClickResult : NSObject

@property (copy, nonatomic) NSString *actionType;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)resultWithActionType:(id)a0 code:(long long)a1 errorMsg:(id)a2;

- (void).cxx_destruct;

@end
