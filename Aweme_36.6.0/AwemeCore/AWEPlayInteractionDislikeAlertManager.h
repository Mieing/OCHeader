@class NSDictionary, NSString;

@interface AWEPlayInteractionDislikeAlertManager : NSObject <DUXAlertDialogDelegate>

@property (copy, nonatomic) id /* block */ alertCancelBlock;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
