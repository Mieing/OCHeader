@class NSString;

@interface BDPDevelopModeTimorItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL controlBoxOn;
@property (nonatomic) long long appType;

- (id)transferToDictWithTimorItem:(id)a0;
- (id)transferToTimorItemWithDict:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
