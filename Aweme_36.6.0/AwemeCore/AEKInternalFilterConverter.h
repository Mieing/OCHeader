@class NSString, NLESegmentComposerFilter_OC, NLEFilter_OC;

@interface AEKInternalFilterConverter : NSObject <AEKFilterConvertible>

@property (retain, nonatomic) NLEFilter_OC *filter;
@property (retain, nonatomic) NLESegmentComposerFilter_OC *segment;
@property (readonly, nonatomic) unsigned long long aek_type;
@property (readonly, nonatomic) long long aek_detailType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFilter:(id)a0;

@end
