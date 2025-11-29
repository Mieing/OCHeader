@class NSString;

@interface AWEIMMessageRedPackageMangoRouteConfig : NSObject

@property (nonatomic) BOOL enableDynamicSchema;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL fallbackFullPageWhenFail;
@property (nonatomic) long long blockInternalPushAPI;
@property (retain, nonatomic) NSString *blockInternalPushQueryKey;
@property (retain, nonatomic) NSString *blockInternalPushQueryValue;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
