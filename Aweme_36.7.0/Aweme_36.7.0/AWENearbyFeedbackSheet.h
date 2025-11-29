@class DUXBasicSheet, NSArray, NSString, AWENearbyFeedbackController;
@protocol AWENearbyFeedbackSheetDelegate;

@interface AWENearbyFeedbackSheet : NSObject <DUXSheetDelegate, AWENearbyFeedbackControllerDelegate>

@property (retain, nonatomic) AWENearbyFeedbackController *feedbackController;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AWENearbyFeedbackSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedbackController:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (void)__showDetailWithItem:(id)a0;
- (id)initWithTitle:(id)a0 items:(id)a1 type:(long long)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;

@end
