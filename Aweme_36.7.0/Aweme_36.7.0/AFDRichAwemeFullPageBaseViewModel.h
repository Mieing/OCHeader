@class AFDRichAwemeFullPageContext;

@interface AFDRichAwemeFullPageBaseViewModel : NSObject

@property (weak, nonatomic) AFDRichAwemeFullPageContext *context;

- (id)referString;
- (id)logExtraDict;
- (id)enterFrom;
- (id)fromModel;
- (id)interactor_fromModel;
- (void)p_trackFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
