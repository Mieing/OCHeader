@class NSString;

@interface BDSCLocalNetworkAlertConfig : NSObject <BDModelCustom>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *doneText;
@property (copy, nonatomic) NSString *cancelText;
@property (nonatomic) BOOL needCloseIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
