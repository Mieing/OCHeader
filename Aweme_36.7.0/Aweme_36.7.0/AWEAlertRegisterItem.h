@class NSArray, NSString, NSObject, NSNumber;
@protocol NSCopying;

@interface AWEAlertRegisterItem : NSObject

@property (copy, nonatomic) NSArray *eventClasses;
@property (retain, nonatomic) Class alertClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *lineOfBusiness;
@property (copy, nonatomic) NSArray *owners;
@property (copy, nonatomic) NSObject<NSCopying> *alertID;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSArray *eventClassInfos;
@property (nonatomic) unsigned long long alertClassStatus;

- (void).cxx_destruct;

@end
