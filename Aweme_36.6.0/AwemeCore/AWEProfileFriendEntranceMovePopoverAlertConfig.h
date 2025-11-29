@class NSString;

@interface AWEProfileFriendEntranceMovePopoverAlertConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *button;
@property (nonatomic) long long showLimit;
@property (nonatomic) long long exitHour;
@property (copy, nonatomic) NSString *defaultToastText;
@property (copy, nonatomic) NSString *frequencyID;
@property (nonatomic) BOOL ignoreFrequencyRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
