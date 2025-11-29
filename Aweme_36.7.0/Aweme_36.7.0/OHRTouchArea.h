@class NSString;

@interface OHRTouchArea : NSObject <OHRTouchArea>

@property (nonatomic) double top;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWithRect:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
