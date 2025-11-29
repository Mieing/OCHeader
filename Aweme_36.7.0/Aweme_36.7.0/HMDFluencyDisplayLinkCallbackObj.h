@class NSString;

@interface HMDFluencyDisplayLinkCallbackObj : NSObject

@property (nonatomic) BOOL isRegistered;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ becomeActiveCallback;
@property (copy, nonatomic) id /* block */ resignActiveCallback;

- (void).cxx_destruct;

@end
