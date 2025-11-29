@class NSDate;

@interface IESLivePrivacyContextProviderToken : NSObject

@property (retain, nonatomic) NSDate *createAt;
@property (copy, nonatomic) id /* block */ invalidateBlock;
@property (nonatomic) BOOL invalidated;

- (id)initWithInvalidateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
