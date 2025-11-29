@class NSString, NSDictionary, UIView;

@interface AWELiveSliceXEvent : NSObject <IESLiveSliceXEvent>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) UIView *activeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
