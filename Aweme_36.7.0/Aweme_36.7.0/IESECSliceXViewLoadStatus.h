@class NSError, NSString, UIView;

@interface IESECSliceXViewLoadStatus : NSObject <IESECSliceXViewLoadStatus>

@property (retain, nonatomic) UIView *sliceXView;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSliceXView:(id)a0;
- (void).cxx_destruct;

@end
