@class NSString;

@interface AWERepostAwemeManager : NSObject <AWERepostAwemeManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addCityInfo:(id)a0;
+ (void)createRepostWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)deleteRepostWithRepostId:(id)a0 completion:(id /* block */)a1;


@end
