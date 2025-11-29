@class NSString;

@interface RxAnnotationSectionProcessor : NSObject <RxAnnotationSectionProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleAnnotationSection:(id)a0;


@end
