@class NSString, NSArray, NSDate;

@interface AFDFeedPreloadItem : NSObject

@property (weak, nonatomic) AFDFeedPreloadItem *parentPreloadItem;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) double preloadTimeoutInterval;
@property (nonatomic) double preloadSize;
@property (nonatomic) BOOL alwaysPreloadFromZero;
@property (nonatomic) double postPreloadSize;
@property (nonatomic) BOOL postPreloaded;
@property (nonatomic) double usedPreloadSize;
@property (retain, nonatomic) NSDate *completionDate;
@property (nonatomic) double preloadedSize;
@property (copy, nonatomic) NSArray *childPreloadItems;
@property (nonatomic) BOOL disabled;

- (id)initWithReferString:(id)a0;
- (void)getPreloadInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)startWithCompletion:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)cancel;

@end
