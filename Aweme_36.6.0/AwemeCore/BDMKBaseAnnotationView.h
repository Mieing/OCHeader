@class NSString, BDKAnnotationView;

@interface BDMKBaseAnnotationView : MKAnnotationView <BDKAnnotationViewProtocol>

@property (nonatomic) double angle;
@property (weak, nonatomic) BDKAnnotationView *customAnnotationView;
@property (retain, nonatomic) id annotation;
@property (nonatomic) long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)convertDragState:(long long)a0;

@end
