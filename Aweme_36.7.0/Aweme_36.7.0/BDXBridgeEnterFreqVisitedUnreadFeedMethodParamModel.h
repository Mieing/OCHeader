@class NSString, NSNumber;

@interface BDXBridgeEnterFreqVisitedUnreadFeedMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *initialUid;
@property (copy, nonatomic) NSString *loadedUsersInfo;
@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSNumber *hasMoreUser;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
