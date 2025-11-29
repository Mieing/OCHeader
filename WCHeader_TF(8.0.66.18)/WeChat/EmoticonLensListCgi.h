@class NSData, NSString;
@protocol EmoticonLensListCgiDelegate;

@interface EmoticonLensListCgi : StoreEmotionBaseCgi

@property (weak, nonatomic) id<EmoticonLensListCgiDelegate> delegate;
@property (retain, nonatomic) NSData *pageBuff;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long enterTime;

- (id)initWithDelegate:(id)a0;
- (void)startRequestFirstPage;
- (void)startRequestNextPage;
- (BOOL)hasNextPage;
- (void)startRequestWithPageBuffer:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)didGetResponse:(id)a0;
- (void).cxx_destruct;

@end
