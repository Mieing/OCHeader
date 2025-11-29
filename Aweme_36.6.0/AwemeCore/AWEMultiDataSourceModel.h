@interface AWEMultiDataSourceModel : NSObject

@property (nonatomic) BOOL shouldProcess;
@property (nonatomic) BOOL shouldStopDispatch;
@property (retain, nonatomic) id data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)init;

@end
