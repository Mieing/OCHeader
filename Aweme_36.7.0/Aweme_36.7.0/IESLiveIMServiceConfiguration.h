@class NSString;

@interface IESLiveIMServiceConfiguration : NSObject

@property (nonatomic) BOOL enableBackButton;
@property (copy, nonatomic) NSString *navLeftButtonColor;
@property (copy, nonatomic) id /* block */ backButtonAction;

- (void).cxx_destruct;

@end
