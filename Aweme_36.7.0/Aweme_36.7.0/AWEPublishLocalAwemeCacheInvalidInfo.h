@class NSString;

@interface AWEPublishLocalAwemeCacheInvalidInfo : NSObject

@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) NSString *errorReason;
@property (retain, nonatomic) NSString *extraErrorMsg;

+ (id)infoWithAwemeID:(id)a0 errorCode:(long long)a1 extraErrorMsg:(id)a2;

- (void).cxx_destruct;

@end
