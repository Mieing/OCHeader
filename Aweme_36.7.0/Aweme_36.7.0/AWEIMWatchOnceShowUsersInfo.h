@class NSNumber, NSArray, NSString;

@interface AWEIMWatchOnceShowUsersInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *msgId;
@property (copy, nonatomic) NSArray *userId;
@property (copy, nonatomic) NSArray *secUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
