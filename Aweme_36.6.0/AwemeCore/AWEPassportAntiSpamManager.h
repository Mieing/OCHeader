@class NSString;
@protocol AWEPassportAntiSpamDelegate;

@interface AWEPassportAntiSpamManager : NSObject <AWEPassportAntiSpamDelegate>

@property (retain, nonatomic) id<AWEPassportAntiSpamDelegate> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)processMiddleCheckWithURL:(id)a0 originalParams:(id)a1 error:(id)a2 rawData:(id)a3 completion:(id /* block */)a4;
- (void)setupWithImplementation:(id)a0;
- (void).cxx_destruct;

@end
