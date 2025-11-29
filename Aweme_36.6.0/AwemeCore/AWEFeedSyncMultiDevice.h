@class NSString;

@interface AWEFeedSyncMultiDevice : NSObject

@property (readonly, nonatomic) BOOL isPad;
@property (readonly, nonatomic) BOOL isPc;
@property (readonly, nonatomic) BOOL isPhone;
@property (readonly, nonatomic) BOOL isWeb;
@property (readonly, nonatomic) BOOL isDesktop;
@property (nonatomic) long long deviceType;
@property (nonatomic) long long deviceID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *system;
@property (retain, nonatomic) id extraData;

- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
