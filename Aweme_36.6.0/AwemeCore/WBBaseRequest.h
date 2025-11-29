@class NSString;
@protocol WeiboSDKRequestDelegate;

@interface WBBaseRequest : WBDataTransferObject

@property (retain, nonatomic) NSString *requestID;
@property (weak, nonatomic) id<WeiboSDKRequestDelegate> delegate;

+ (id)mappedObjectWithDictionary:(id)a0;
+ (Class)associateResponseClass;
+ (id)request;
+ (void)nothing;
+ (id)transferType;

- (BOOL)canAssociateWithResponse:(id)a0;
- (BOOL)canNotHandleByWeiboClientApp;
- (void)storeToDictionary:(id)a0;
- (BOOL)canHandleByWeiboClientApp;
- (void)setObjectID:(id)a0;
- (void).cxx_destruct;
- (id)objectID;
- (void)dealloc;
- (void)loadFromDictionary:(id)a0;

@end
