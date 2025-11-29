@class NSString;

@interface BDPSubscribePopupInfo : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned long long showStatus;
@property (nonatomic) unsigned long long timesType;
@property (nonatomic) BOOL rejectFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
