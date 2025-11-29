@class NSString, NSArray;

@interface AFDFastReplyRegisterItem : NSObject <AFDFastReplyRegisterItemProtocol>

@property (retain, nonatomic) Class strategyClass;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *lineOfBusiness;
@property (copy, nonatomic) NSArray *owners;
@property (nonatomic) unsigned long long elementPriority;
@property (nonatomic) long long strategyPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
