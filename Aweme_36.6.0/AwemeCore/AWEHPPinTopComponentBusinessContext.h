@class NSString, AWEHPPinTopComponentUIConfig;

@interface AWEHPPinTopComponentBusinessContext : NSObject <AWEHPPinTopComponentContext>

@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *componentConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
