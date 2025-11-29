@class NSString, AWEVideoPublishViewModel;

@interface ACCDraftRRObserverWrapper : NSObject

@property (retain, nonatomic) NSString *key;
@property (weak, nonatomic) id observer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ canHandle;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
