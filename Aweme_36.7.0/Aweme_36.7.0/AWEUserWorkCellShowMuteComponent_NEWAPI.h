@class NSString;

@interface AWEUserWorkCellShowMuteComponent_NEWAPI : AWEUserWorkCellDiagnoseComponent_NEWAPI <AWEUserWorkCellComponentTrackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;
+ (BOOL)__shouldShowMuteTips:(id)a0;

- (id)trackParams;

@end
