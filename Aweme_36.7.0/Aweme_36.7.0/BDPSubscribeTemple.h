@class NSString, NSArray;

@interface BDPSubscribeTemple : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long acceptStatus;
@property (nonatomic) BOOL alwaysSubscribe;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long timesType;
@property (copy, nonatomic) NSArray *reminderList;
@property (nonatomic) unsigned long long subscribeResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
