@class NSDictionary, NSString, UIView;
@protocol CSJAd;

@interface CSJViewTracker : NSObject <CSJViewTracker>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) id<CSJAd> admodel;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isWitness;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long lastPresentation;
@property (copy) id /* block */ showEvent;
@property (copy) id /* block */ dismissEvent;
@property (nonatomic) double showTimestamp;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIfViewInScreen;
- (BOOL)invalid;
- (void).cxx_destruct;

@end
