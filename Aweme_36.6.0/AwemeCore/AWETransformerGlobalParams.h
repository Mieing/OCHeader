@class NSString, NSMutableDictionary, NSDictionary;
@protocol AWETransformerNativeContainerDelegate;

@interface AWETransformerGlobalParams : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) NSString *currentLocationCity;
@property (retain, nonatomic) NSMutableDictionary *nativeElementSizeDict;
@property (weak, nonatomic) id<AWETransformerNativeContainerDelegate> playerContainerDelegate;
@property (retain, nonatomic) NSMutableDictionary *lifeServiceDiffHeightDictionary;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *globalTrackParams;
@property (copy, nonatomic) NSDictionary *globalLynxTrackParams;
@property (nonatomic) unsigned long long rowType;
@property (copy, nonatomic) NSDictionary *cardTrackParams;
@property (copy, nonatomic) NSDictionary *cardSchemaParams;

- (void)updateContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateDiffHeightForKey:(id)a0 diff:(double)a1;
- (id)diffHeightDict;
- (id)initWithBusinessID:(id)a0 currentLocationCity:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (void)registerNativeElementContainerSize:(struct CGSize { double x0; double x1; })a0 forContainerType:(id)a1;
- (void)registerNativeElementContainerDelegate:(id)a0 forContainerType:(id)a1;
- (struct CGSize { double x0; double x1; })nativeElementContainerSizeWithContainerType:(id)a0;
- (id)nativeElementContainerDelegateWithContainerType:(id)a0;
- (double)diffHeightForKey:(id)a0;
- (void).cxx_destruct;

@end
