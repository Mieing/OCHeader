@class NSArray, NSString, NSTimer, NSMutableArray;

@interface BDLTracerouteManager : NSObject <BDLDAQTaskProtocol>

@property (nonatomic) BOOL enable;
@property (nonatomic) double percentage;
@property (nonatomic) long long interval;
@property (nonatomic) long long first_ttl;
@property (nonatomic) long long query_count;
@property (copy, nonatomic) NSArray *domains;
@property (copy, nonatomic) NSString *ipAddress;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableArray *hopInfos;
@property (retain, nonatomic) NSTimer *pollingTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)startTask;

- (void)startTracerouteWithCompletion:(id /* block */)a0;
- (void)doTraceroute:(id /* block */)a0;
- (BOOL)sendAndRecv:(int)a0 addr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 querycount:(int)a2 ttl:(int)a3 hop:(int)a4;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
