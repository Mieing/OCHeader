@class NSString, AWEAwemeModel;

@interface AWEAlertDoubleColumnRadicalEvent : NSObject <AWEAlertEventProtocol>

@property (nonatomic) long long alertType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventID;
+ (id)eventDescription;

- (void).cxx_destruct;

@end
