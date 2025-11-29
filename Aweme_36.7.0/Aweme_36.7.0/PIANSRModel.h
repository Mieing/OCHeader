@class NSString, PIAWorker;

@interface PIANSRModel : NSObject

@property (copy, nonatomic) NSString *HTML;
@property (copy, nonatomic) NSString *URLString;
@property (nonatomic) BOOL reuse;
@property (nonatomic) long long expires;
@property (nonatomic) double createTime;
@property (retain, nonatomic) PIAWorker *worker;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
