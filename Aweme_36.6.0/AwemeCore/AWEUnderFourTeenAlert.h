@class NSString, AWETeenUnderFourTeenAlertView;

@interface AWEUnderFourTeenAlert : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWETeenUnderFourTeenAlertView *alertView;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
