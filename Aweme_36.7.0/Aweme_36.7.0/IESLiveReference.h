@class NSString;
@protocol IESLiveReferenceActions;

@interface IESLiveReference : NSObject <IESLiveReference>

@property (nonatomic) long long slideCount;
@property (nonatomic) long long audienceCount;
@property (retain, nonatomic) id<IESLiveReferenceActions> actionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)retainSlideVC;
- (void)releaseSlideVC;
- (void)retainAudience;
- (void)releaseAudience;
- (long long)audienceReferenceCount;
- (void).cxx_destruct;

@end
