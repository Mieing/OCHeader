@class NSString;

@interface APBToygerAlertConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *leftButtonText;
@property (copy, nonatomic) NSString *rightButtonText;
@property (nonatomic) long long returnCode;

- (void).cxx_destruct;

@end
