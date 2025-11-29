@interface AWEServiceEntryInternal : NSObject

@property (retain, nonatomic) id innerService;
@property (nonatomic) BOOL available;

+ (id)serviceEntry:(id)a0;
+ (id)serviceClassEntry:(id)a0;

- (void)available:(id /* block */)a0 unavailable:(id /* block */)a1;
- (id)initWithProtocolEntry:(id)a0 available:(BOOL)a1;
- (void).cxx_destruct;

@end
