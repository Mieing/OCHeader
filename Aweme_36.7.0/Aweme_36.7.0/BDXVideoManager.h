@protocol BDXVideoManagerDelegate;

@interface BDXVideoManager : NSObject

@property (class, copy, nonatomic) Class videoCorePlayerClazz;
@property (class, copy, nonatomic) Class videoModelConverterClz;
@property (class, copy, nonatomic) Class fullScreenPlayerClz;
@property (class, retain, nonatomic) id<BDXVideoManagerDelegate> delegate;

+ (void)initialize;
+ (void)initialize;

@end
