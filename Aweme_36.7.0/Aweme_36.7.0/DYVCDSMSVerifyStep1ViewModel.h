@class NSString;

@interface DYVCDSMSVerifyStep1ViewModel : NSObject

@property (copy, nonatomic) NSString *UID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;

+ (id)instanceWithUID:(id)a0;

- (id)sendCode:(id)a0;
- (void).cxx_destruct;

@end
