@class NSString, NSDictionary;

@interface WBBaseResponse : WBDataTransferObject

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *responseID;
@property (retain, nonatomic) NSDictionary *requestUserInfo;
@property (nonatomic) long long statusCode;

+ (id)mappedObjectWithDictionary:(id)a0;
+ (id)objectFromPasteboardWithID:(id)a0 sdkVersion:(id)a1 url:(id)a2;
+ (id)objectFormSchemeUrl:(id)a0 sdkID:(id)a1 sdkVersion:(id)a2;
+ (id)response;
+ (void)nothing;
+ (id)transferType;

- (id)validateBeforeSend;
- (id)validateAfterReceive;
- (void)storeToDictionary:(id)a0;
- (void)setObjectID:(id)a0;
- (void).cxx_destruct;
- (id)objectID;
- (id)init;
- (void)loadFromDictionary:(id)a0;

@end
