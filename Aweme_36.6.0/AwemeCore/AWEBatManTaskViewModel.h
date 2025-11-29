@class NSString;

@interface AWEBatManTaskViewModel : NSObject <XPlayBusinessTaskInfoProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonDoneTitle;
@property (nonatomic) long long totalAddedTime;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
