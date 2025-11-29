@class NSURL, BDPUniqueID, NSString;

@interface BDPFloatingView_BDPSettingsManagerHg : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *activityURLString;
@property (copy, nonatomic) NSString *frequencyKey;
@property (retain, nonatomic) NSString *iconType;
@property (retain, nonatomic) NSURL *activityURL;

- (BOOL)shouldShowWithKey:(id)a0 withDays:(long long)a1;
- (id)getActivityURLWithUrl:(id)a0;
- (void)transferToActivityURL;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithUniqueID:(id)a0;

@end
