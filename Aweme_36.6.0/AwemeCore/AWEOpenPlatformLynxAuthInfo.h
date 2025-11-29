@class NSDictionary, AWEOpenPlatformAuthEntranceModel;

@interface AWEOpenPlatformLynxAuthInfo : NSObject

@property (retain, nonatomic) AWEOpenPlatformAuthEntranceModel *entranceModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *originParams;
@property (copy, nonatomic) id /* block */ failCompletionBlock;

- (void).cxx_destruct;

@end
