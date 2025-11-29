@protocol IESIMServiceMaybeUnavailable;

@interface IESIMServiceEntryInternal : NSObject

@property (retain, nonatomic) id<IESIMServiceMaybeUnavailable> innerService;

+ (id)serviceEntry:(id)a0;

- (void)available:(id /* block */)a0 unavailable:(id /* block */)a1;
- (id)initWithProtocolEntry:(id)a0;
- (void).cxx_destruct;

@end
