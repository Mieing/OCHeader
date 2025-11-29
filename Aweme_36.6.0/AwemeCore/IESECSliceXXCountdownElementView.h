@class NSNumber, NSString;

@interface IESECSliceXXCountdownElementView : IESECSliceXViewElementView <IESECSliceXTimerListener>

@property (retain, nonatomic) NSNumber *finishedAttrValueBeforeTimerRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
