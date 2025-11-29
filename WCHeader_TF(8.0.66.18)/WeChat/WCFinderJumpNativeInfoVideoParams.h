@class NSString;

@interface WCFinderJumpNativeInfoVideoParams : NSObject

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) BOOL forbidGetRelatedList;
@property (nonatomic) unsigned long long getRelatedListScene;
@property (copy, nonatomic) NSString *jumpInfoBypassInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
