@class NSString;

@interface AWEIMSkylightDistributionSettings : NSObject

@property (retain, nonatomic) NSString *liveStatusType;
@property (retain, nonatomic) NSString *liveIconText;
@property (retain, nonatomic) NSString *linkStatusType;
@property (retain, nonatomic) NSString *linkIconText;

- (void).cxx_destruct;
- (void)setupWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
