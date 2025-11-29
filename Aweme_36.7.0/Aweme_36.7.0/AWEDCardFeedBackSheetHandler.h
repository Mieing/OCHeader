@class NSString;

@interface AWEDCardFeedBackSheetHandler : NSObject <AWENearbyFeedbackSheetDelegate>

@property (copy, nonatomic) id /* block */ feedBackSheetDelegateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedbackSheet:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
