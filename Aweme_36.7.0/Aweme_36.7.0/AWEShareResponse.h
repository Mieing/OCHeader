@class NSError, NSString, AWEShareContext;
@protocol AWEShareFunction;

@interface AWEShareResponse : NSObject <AWEShareResponseProtocol>

@property (nonatomic) unsigned long long reasion;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) id<AWEShareFunction> function;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shareResultWithIMResult:(unsigned long long)a0;
+ (id)createModel;

- (void).cxx_destruct;

@end
