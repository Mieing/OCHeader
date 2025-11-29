@class NSString, NSDictionary, NSArray;

@interface BTDALEvent : NSObject <NSCoding>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) long long openScene;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *paramsJson;
@property (copy, nonatomic) NSString *extraValue;
@property (nonatomic) BOOL enableV3Event;
@property (nonatomic) BOOL disableTrack;
@property (nonatomic) BOOL shouldOpenLandingPage;
@property (nonatomic) BOOL isAutoJump;
@property (copy, nonatomic) NSArray *autoJumpWhiteList;

- (void)setDefaltValue;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
