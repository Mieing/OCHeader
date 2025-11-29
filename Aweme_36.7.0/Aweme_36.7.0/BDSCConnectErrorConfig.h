@class NSString;

@interface BDSCConnectErrorConfig : NSObject <BDModelCustom>

@property (nonatomic) long long warnType;
@property (copy, nonatomic) NSString *playerControlTitle;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSString *alertCancelText;
@property (copy, nonatomic) NSString *alertDoneText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
