@class NSString, NSArray;

@interface BDPSubscribeUserAction : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) unsigned long long userSubAction;
@property (nonatomic) unsigned long long rememberAction;
@property (copy, nonatomic) NSArray *reminderList;
@property (nonatomic) BOOL tplCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
